#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	float x0;
	float x1;
	printf("please input a number:");
	scanf("%f",&a);
	x0=a/2;
	x1=(x0+a/x0)/2;
	do
	{
		x0=x1;
		x1=(x0+a/x0)/2;
	}
	while(fabs(x1-x0)>=1e-5);
	printf("%f的平方根为%f。",a,x1);
	return 0;
}

