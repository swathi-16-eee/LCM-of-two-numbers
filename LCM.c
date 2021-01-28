#include<stdio.h>
int lcm(int a,int b);
main()
{
	int a,b,result;
	printf("Input first number:");
	scanf("%d",&a);
	printf("Input second number:");
	scanf("%d",&b);
	result=lcm(a,b);
	printf("LCM of %d and %d = %d",a,b,result);
	return 0;
}
int lcm(int a, int b)
{
	static int x=1;
	if(x%a==0 && x%b==0)
	{
		return x;
	}
	else
	{
		x++;
		lcm(a,b);
		return x;
	}
}
