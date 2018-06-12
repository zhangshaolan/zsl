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
	printf("请输入一个字符串：\n");
	gets(s);
	len=f(s);
	printf("字符串长度为：%d\n",len);
	return 0;
}


