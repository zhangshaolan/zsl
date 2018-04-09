#include<stdio.h>
int main()
{
	int chengji;
	printf("ÇëÊäÈë³É¼¨:");
	scanf("%d",&chengji);
	if(chengji>=90)
	{
		printf("A");
	}
	else if(chengji>=80)
	{
		printf("B");
	}
	else if(chengji>=70)
	{
		printf("C");
	}
	else if(chengji>=60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	return 0;
}

