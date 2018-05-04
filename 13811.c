#include<stdio.h>
int main()
{
	
	int i;
	float h=50;
	float s=100;
	for(i=2;i<=10;i++)
	{
		s=s+2*h;
		h=h/2;
	}
	printf("第10次落地时共经过%f米\n第10次反弹高度为%f",s,h);
	return 0;
}
		