#include<stdio.h>
int main()
{
	int i;
	int j;
	int n=0;
	int a[100];
	for(i=1;i<=100;i++)
	{
		a[i]=i;
	}
	for(i=1;i<=100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(a[i]%j==0)
			{
				a[i]=0;
			}
		}
	}
	for(i=1;i<=100;i++)
	{
		if(a[i]!=0)
		{
			printf("%d  ",a[i]);
		
		}
	}
	

	return 0;
}
