#include<stdio.h>
int main()
{
	int i,j,k,max,m,n;
	int maxj;
	int a[100][100];
	int f=1;                         //用来判断是否有鞍点                      
	printf("请输入二维数组行数：");
	scanf("%d",&m);
	printf("请输入二维数组列数：");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("请输入第%d行第%d列元素：",i+1,j+1);
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
			printf("存在鞍点%d",max);
			break;
		}
		
	}
	
	if(!f)
	{
		printf("不存在鞍点");
	}
	return 0;
}





