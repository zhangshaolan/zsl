#include<stdio.h>
void sort(int a[],int n);
int main()
{
	int i;
	int a[10];
	printf("������10�����֣�");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,10);
	return 0;
}
void sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
		printf("10������С�����˳��Ϊ��");
		for(i=0;i<n;i++)
		{
			printf("%5d",a[i]);
		}
}
	


