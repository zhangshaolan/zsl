#include<stdio.h>
int main()
{
	int i;
	int a[5];
	printf("�����������е�5����ֵ��\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ԭ������������Ϊ��");
	for(i=0;i<5;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n���ڵ���������Ϊ��");
	for(i=4;i>=0;i--)
	{
		printf("%3d",a[i]);
	}
	return 0;
}

