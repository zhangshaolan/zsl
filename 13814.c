#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	float x0;
	float y;
	float y1;
	x=1.5;
	do
	{
		x0=x;
		y=((2*x0-4)*x0+3)*x0-6;
		y1=(6*x0-8)*x0+3;
		x=x0-y/y1;
	}
	while(fabs(x-x0)>=1e-5);
	printf("������1.5�����ĸ�Ϊ��%f��",x);
	return 0;
}