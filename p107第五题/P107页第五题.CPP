#include<stdio.h>
#include<math.h>
int main()
{
	
	int number;
	double square;
	int asqrt;
	printf("输入一个小于1000的正数:");
	scanf("%d",&number);
	if(number>=0&&number<=1000)
	{
		square=sqrt(number);
		asqrt=(int)square;
		printf("%d的平方根为%d\n",number,asqrt);
	}
	else
	{
		printf("请重新输入一个小于1000的正数:");
		scanf("%d",&number);
		square=sqrt(number);
	    asqrt=(int)square;
		printf("%d的平方根为%d\n",number,asqrt);
	}
	return 0;
}
