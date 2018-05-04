#include<stdio.h>
int main()
{
	int sn=0;
	int i;
	int j;
	for(i=1;i<=20;i++)
	{
		j=j*i;
		sn=sn+j;
	}
	printf("1!+2!+3!+4!+...+20!=%d",sn);
	return 0;
}
		