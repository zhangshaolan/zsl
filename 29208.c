#include<stdio.h>
int main()
{
	char *p;
	char str[100];
	int upper=0;
	int lower=0;
	int space=0;
	int digit=0;
	int other=0;
	p=str;
	printf("请输入一个字符串：");
	gets(str);
	while(*p!='\0')
	{
		if(*p>='A'&&*p<='Z'){upper++;}
		else if(*p>='a'&&*p<='z')
		{
			lower++;
		}
		else if(*p==' ')
		{
			space++;
		}
		else if(*p>='0'&&*p<='9')
		{
			digit++;
		}
		else 
		{other++;
		}
		p++;
	}
	printf("大写字母为：%d\n小写字母为：%d\n空格数为：%d\n数字为：%d\n其他为：%d\n",upper,lower,space,digit,other);
	return 0;
}

