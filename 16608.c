#include<stdio.h>
int main()
{
	int i,j,k,max,m,n;
	int maxj;
	int a[100][100];
	int f=1;                         //�����ж��Ƿ��а���                      
	printf("�������ά����������");
	scanf("%d",&m);
	printf("�������ά����������");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("�������%d�е�%d��Ԫ�أ�",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		max=a[i][0];
		maxj=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				maxj=j;
			}
		}
		for(k=0;k<m;k++)
		{
			if(max>a[k][maxj])
			{	
				f=0;
				continue;
			}
		}
		if(f)
		{
			printf("���ڰ���%d",max);
			break;
		}
		
	}
	
	if(!f)
	{
		printf("�����ڰ���");
	}
	return 0;
}





