#include<stdio.h>
int main()
{
	int i;
	int a[5];
	printf("请输入数组中的5个数值：\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("原来的数组排序为：");
	for(i=0;i<5;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n现在的数组排序为：");
	for(i=4;i>=0;i--)
	{
		printf("%3d",a[i]);
	}
	return 0;
}

