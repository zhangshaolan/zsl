#include<stdio.h>
int main()
{
	int i;
	int a=1;
	int s=0;
	for(i=1;i<=9;i++)
	{
		s=(a+1)*2;
		a=s;
		
	}

	printf("��1�칲ժ��%d�����ӡ�",s);
	return 0;
}