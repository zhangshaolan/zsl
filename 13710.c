#include<stdio.h>
int main()
{
	int i;
	float a=1;
	float b=2;
	float t;
	float sum=0;
	for(i=1;i<=20;i++)
	{
		sum=sum+b/a;
		t=a;
		a=b;
		b=t+a;
	}
	printf("2/1+3/2+5/3+8/5+13/8+...=%f",sum);
	return 0;
}
