#include<stdio.h>
int main()
{
	int i;
	int j;
	int t;
	int a[10];
	for(i=0;i<=9;i++)
	{
	printf("please input a number:");
	scanf("%d",&a[i]);
	}
	for(i=0;i<=8;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("it is sorted from smallest to largest:");
	for(i=0;i<=9;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;

}