#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int max;
	printf("�������һ������:");
	scanf("%d",&a);
	printf("������ڶ�������:");
	scanf("%d",&b);
	printf("���������������:");
	scanf("%d",&c);
	printf("��������ĸ�����:");
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
	printf("�ĸ�����С�����˳��Ϊ��%d,%d,%d,%d",a,b,c,d);
	return 0;
}
