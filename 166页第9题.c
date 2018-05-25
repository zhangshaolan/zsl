#include <stdio.h>
int main()

{
	int a[15]={99,96,93,90,85,80,77,76,66,24,18,16,9,8,6,};
	int x,i;
	int n=15;
	int low=0;
	int mid;
	int high=n-1 ;
	for(i=0;i<15;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n请输入一个数:");
	scanf("%d",&x);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x>a[mid])
		{
			high=mid-1;
		}
		else if(x<a[mid])
		{
			low=mid+1;
		}
		else if(x==a[mid])
		{
			printf("%d是第%d个元素",x,mid+1);
			break;
		}
	}
	if(x!=a[mid])
	{
		printf("无此数");
		
	}
	return 0;
}
