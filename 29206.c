#include<stdio.h>
#define N 100
int f(char *s)
{
	int i=0;
	while(*s!='\0')
	{
		i++;
		s++;
	}
	return i;
}
int main()
{
	char s[N];
	int len;
	printf("������һ���ַ�����\n");
	gets(s);
	len=f(s);
	printf("�ַ�������Ϊ��%d\n",len);
	return 0;
}


