#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int max;
	printf("请输入第一个整数:");
	scanf("%d",&a);
	printf("请输入第二个整数:");
	scanf("%d",&b);
	printf("请输入第三个整数:");
	scanf("%d",&c);
	printf("请输入第四个整数:");
	scanf("%d",&d);
	if(a>b)
	{
		max=a;
		a=b;
		b=max;
	}
	if(a>c)
	{
		max=a;
		a=c;
		c=max;
	}
	if(a>d)
	{
		max=a;
		a=d;
		d=max;
	}
	if(b>c)
	{
		max=b;
		b=c;
		c=max;
	}
	if(b>d)
	{
		max=b;
		b=d;
		d=max;
	}
	if(c>d)
	{
		max=c;
		c=d;
		d=max;
	}
	printf("四个数从小到大的顺序为：%d,%d,%d,%d",a,b,c,d);
	return 0;
}
