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
			printf("�������%d�е�%d�е�������",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=3;i++)
	{
		sum=sum+a[i][i];
	}
	printf("�Խ���Ԫ��֮��Ϊsum=%d",sum);
	return 0;
}
