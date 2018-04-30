#include<stdio.h>
int main()
{
	int m;
	int n;
	int t;
	int a;
	int b;
	int lcm;


	printf("请输入正整数n：");
	scanf("%d",&n);
	printf("请输入正整数m：");
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
	printf("最大公约数为:%d\n",n);
	printf("最小公倍数为：%d\n",lcm);
		return 0;
}
