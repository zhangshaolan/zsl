#include<stdio.h>
int main()
{
	char s1[100];
	char s2[100];
	int i=0;
	int j=0;
	printf("�������һ���ַ�����");
	gets(s1);
	printf("\n������ڶ����ַ�����");
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
	printf("\n���Ӻ��ַ���Ϊ��%s",s1);
	return 0;
}
