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
	printf("������һ���ַ�����");
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
	printf("��д��ĸΪ��%d\nСд��ĸΪ��%d\n�ո���Ϊ��%d\n����Ϊ��%d\n����Ϊ��%d\n",upper,lower,space,digit,other);
	return 0;
}

