#include<stdio.h>
int main()
{
	int x1;
	int x2;
	int x3;
	int i;
	for(i=100;i<=999;i++)
	{
		x1=i/100;
		x2=i%100/10;
		x3=i%100%10;
		if(x1*x1*x1+x2*x2*x2+x3*x3*x3==i)
		{
			printf("%d为水仙花数\n",i);
		}
	}
	return 0;
}
