#include<stdio.h>
int main()
{
	int m;
	int n;
	int t;
	int a;
	int b;
	int lcm;


	printf("������������n��");
	scanf("%d",&n);
	printf("������������m��");
	scanf("%d",&m);
	if(n<m)
	{
		t=n;
		n=m;
		m=t;
	}
	a=m*n;
	while(m!=0)
	{
		b=n%m;
		n=m;
		m=b;
	}
	lcm=a/n;
	printf("���Լ��Ϊ:%d\n",n);
	printf("��С������Ϊ��%d\n",lcm);
		return 0;
}
