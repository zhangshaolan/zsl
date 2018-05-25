#include<stdio.h>
int main()
{
	char s1[100];
	char s2[100];
	int a=0;                          //记录第一个字符串的ASCII的和
	int	b=0;                         //记录第二个字符串的ASCII码的和
	int i=0;
	int j=0;
	printf("请输入第一个字符串：");
	gets(s1);
	printf("请输入第二个字符串：");
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
		printf("\ns1>s2,差值为%d",a-b);
	}
	else
	{
		printf("\ns1<s2,差值为%d",a-b);
	}
	return 0;
}



