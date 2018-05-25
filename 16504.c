#include<stdio.h>
int main()
{
	int a[10]={1,9,10,15,16,45,48,55,89,99};
	int n;
	int i;
	printf("原来的排序为：");
	for(i=0;i<=9;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n请输入一个整数：");
	scanf("%d",&n);
	for(i=9;i>=0;i--)
	{
		if(n<a[i])
		{
			a[i+1]=a[i];
		}
		else
		{
			a[i+1]=n;
			break;
		}
	}
	printf("插入一个数后的排序为：");
	for(i=0;i<=10;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}



	