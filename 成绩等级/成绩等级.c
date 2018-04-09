#include<stdio.h>
int main()
{
	int chengJi;
	printf("ÇëÊäÈë³É¼¨:");
	scanf("%d",&chengJi);
	if(chengJi>=90)
	{
		printf("A");
	}
	else if(chengJi>=80)
	{
		printf("B");
	}
	else if(chengJi>=70)
	{
		printf("C");
	}
	else if(chengJi>=60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	return 0;
}

