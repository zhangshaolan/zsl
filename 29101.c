#include<stdio.h>
int main()
{
	int a,b,c,*p1,*p2,*p3,*p;
	printf("������3������\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	p1=&a;
	p2=&b;
	p3=&c;
	if(a>b)
	{
		p=p1;
		p1=p2;
		p2=p;
	}
	if(a>c)
	{
		p=p1;
		p1=p3;
		p3=p;
	}
	if(b>c)
	{
		p=p2;
		p2=p3;
		p3=p;
	}
	printf("��С����������\n");
	printf("%d,%d,%d",*p1,*p2,*p3);
	return 0;
}