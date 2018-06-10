#include<stdio.h>
#include<stdlib.h>
double le(n,x);
int main()
{
	int x,n;
	printf("ÇëÊäÈën:");
	scanf("%d",&n);
	printf("ÇëÊäÈëx:");
	scanf("%d",&x);
	printf("%f\n",le(n,x));
	return 0;
}
double le(int n,int x)
{
	double y;
	if(n==0)
	{
		y=1;
	}
	if(n==1)
	{
		y=x;
	}
	if(n>1)
	{
		y=((2*n-1)*x-le(n-1,x)-(n-1)*le(n-2,x))/n;

	}
	return y;
}




