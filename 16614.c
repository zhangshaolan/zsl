#include<stdio.h>
int main()
{
	char s1[100];
	char s2[100];
	int a=0;                          //��¼��һ���ַ�����ASCII�ĺ�
	int	b=0;                         //��¼�ڶ����ַ�����ASCII��ĺ�
	int i=0;
	int j=0;
	printf("�������һ���ַ�����");
	gets(s1);
	printf("������ڶ����ַ�����");
	gets(s2);
	while(s1[i]!=0)
	{
		a=a+s1[i];
		i++;
	}
	while(s2[j]!=0)
	{
		b=b+s2[j];
		j++;
	}
	if(a>b)
	{
		printf("\ns1>s2,��ֵΪ%d",a-b);
	}
	else
	{
		printf("\ns1<s2,��ֵΪ%d",a-b);
	}
	return 0;
}



