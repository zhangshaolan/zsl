#include<stdio.h>
int main()
{
	float i;
	float bonus;
	int x;
	printf("请输入当月利润i:");
	scanf("%f",&i);
	if(i<=100000)
	{
		x=0;
	}
	else if(i<=200000)
	{
		x=1;
	}
	else if(i<=400000)
	{
		x=2;
	}
	else if(i<=600000)
	{
		x=3;
	}
	else if(i<=1000000)
	{
		x=4;
	}
	else
	{
		x=5;
	}


	switch(x)
	{
	case 0:bonus=i*0.1;break;
	case 1:bonus=100000*0.1+(i-100000)*0.075;break;
	case 2:bonus=100000*0.1+100000*0.075+(i-200000)*0.05;break;
	case 3:bonus=100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03;break;
	case 4:bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015;break;
	case 5:bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01;break;
	}
	printf("应发奖金总数：%f",bonus);
	return 0;
}



