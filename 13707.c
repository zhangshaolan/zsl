#include<stdio.h>
int main()
{
	double k1;
	double k2;
	double k3;
	double sn1=0;
	double sn2=0;
	double sn3=0;
	double sn;
	for(k1=1;k1<=100;k1++)
	{
		sn1=sn1+k1;
	}
	for(k2=1;k2<=50;k2++)
	{
		sn2=sn2+k2*k2;
	}
	for(k3=1;k3<=10;k3++)
	{
		sn3=sn3+1/k3;
	}
	sn=sn1+sn2+sn3;
	printf("1+2+..+100+1*1+...+50*50+1/1+1/2+...+1/10=%f",sn);
	return 0;
	}


