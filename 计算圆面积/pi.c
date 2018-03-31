#include <stdio.h>
#define PI 3.1415926
void main()
{
	float r;
	float area;
	float l;
	printf("r=");
	scanf("%f",&r);
	area=PI*r*r;
	printf("PI=%fr=%f\narea=%f\n",PI,r,area);
	return 0;
}