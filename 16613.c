#include<stdio.h>
int main()
{
	char s1[100];
	char s2[100];
	int i=0;
	int j=0;
	printf("请输入第一个字符串：");
	gets(s1);
	printf("\n请输入第二个字符串：");
	gets(s2);
	while(s1[i]!='\0')
	{
		i++;
	}
	while(s2[j]!=0)
	{
		s1[i++]=s2[j++];
		
	}
	s1[i]='\0';
	printf("\n连接后字符串为：%s",s1);
	return 0;
}
