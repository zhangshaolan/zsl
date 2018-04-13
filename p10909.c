#include<stdio.h>
int main()
{
	int num;
	int i1;
	int i2;
	int i3;
	int i4;
	int i5;
	printf("请输入一个不多于5位的正整数:");
	scanf("%d",&num);
	i1=num/10000;
	i2=num%10000/1000;
	i3=num%1000/100;
	i4=num%100/10;
	i5=num%10;
	if(num>9999)
	{
		printf("输入的是一个5位数。");
		printf("\n万位数为%d\n,千位数为%d\n,百位数为%d\n,十位数为%d\n,个位数为%d\n",i1,i2,i3,i4,i5);
		printf("逆序为%d%d%d%d%d",i5,i4,i3,i2,i1);
	}
	else if(num>999)
	{
		printf("输入的是一个4位数。");
		printf("\n千位数为%d\n,百位数为%d\n,十位数为%d\n,个位数为%d\n",i2,i3,i4,i5);
		printf("逆序为%d%d%d%d",i5,i4,i3,i2);
	}
	else if(num>99)
	{
		printf("输入的是一个3位数。");
		printf("\n百位数为%d\n,十位数为%d\n,个位数为%d\n",i3,i4,i5);
		printf("逆序为%d%d%d",i5,i4,i3);
	}
	else if(num>9)
	{
		printf("输入的是一个2位数。");
		printf("\n十位数为%d\n,个位数为%d\n",i4,i5);
		printf("逆序为%d%d%",i5,i4);
	}
	else
	{
		printf("输入的是一个1位数。");
		printf("\n个位数为%d\n",i5);
		printf("逆序为%d",i5);
	}
	return 0;
}
