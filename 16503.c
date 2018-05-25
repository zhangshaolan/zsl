#include<stdio.h>
int main()
{
	int a[3][3];
	int i;
	int j;
	int sum=0;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("请输入第%d行第%d列的整数：",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=3;i++)
	{
		sum=sum+a[i][i];
	}
	printf("对角线元素之和为sum=%d",sum);
	return 0;
}
