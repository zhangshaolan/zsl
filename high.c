#include<stdio.h>
int main()
{
	int h=10;
	float x1=2;
	float y1=2;
	float x2=-2;
	float y2=2;
	float x3=-2;
	float y3=-2;
	float x4=2;
	float y4=-2;
	float x;
	float y;
	float d1;
	float d2;
	float d3;
	float d4;
	printf("请输入任一点的坐标\n");
	printf("please input x:");
	scanf("%f",&x);
	printf("please input y:");
	scanf("%f",&y);

	d1 = (x - x1)*(x - x1) + (y - y1)*(y - y1);
	d2 = (x - x2)*(x - x2) + (y + y2)*(y + y2);
	d3 = (x + x3)*(x + x3) + (y - y3)*(y - y3);
	d4 = (x + x4)*(x + x4) + (y + y4)*(y + y4);
	if (d1>1 && d2>1 && d3>1 && d4>1)
	{
		h = 0;
	}

	printf("该点的建筑高度为%d",h);
	return 0;
}





	