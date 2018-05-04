#include<stdio.h>
int main()
{
	int sn=0;
	int a;
	int n;
	int tn=0;
	int count=1;
	printf("please input a=");
	scanf("%d",&a);
	printf("please input n=");
	scanf("%d",&n);
	while(count<=n)
	{
		tn=tn+a;
		sn=sn+tn;
		a=a*10;
		++count;
	}
	printf("a=%d,n=%d\nsn=a+aa+aaa+...+aa...a=%d",a,n,sn);
	return 0;
}

	
	