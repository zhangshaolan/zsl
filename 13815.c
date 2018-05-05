#include<stdio.h>
#include<math.h>
int main()
{
	float x0;
	float x1;
	float x2;
	float f0;
	float f1;
	float f2;
	do
	{
		printf("please input x1:");
		scanf("%f",&x1);
		printf("please input x1:");
		scanf("%f",&x1);
		f1=((2*x1-4)*x1+3)*x1-6;
		f2=((2*x2-4)*x2+3)*x2-6;
	}
	while((f1*f2)>0);
	do
	{
		x0=(x1+x2)/2;
		f0=((2*x0-4)*x0+3)*x0-6;
		if((f0*f1)<0)
		{
			x2=x0;
			f2=f0;
		}
		else
		{
			x1=x0;
			f1=f0;
		}
	}
	while(fabs(f0)>=1e-5);
	printf("x=%f",x0);
	return 0;
}


