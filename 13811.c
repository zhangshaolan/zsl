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
	printf("��10�����ʱ������%f��\n��10�η����߶�Ϊ%f",s,h);
	return 0;
}
		