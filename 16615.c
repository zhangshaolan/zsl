#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	char s2[100];
	int i;
	int j=0;
	printf("�������һ���ַ�����");
	gets(s1);
	printf("������ڶ����ַ�����");
	scanf("%s",s2);
	for(i=strlen(s1);i<100;i++)
	{
		s1[i]=s2[j];
		if(s2[j]=='\0')
		{
			break;
		}
		else
		{
			j++;
		}

	
	}
	printf("\n���ƺ���Ϊ��");
	puts(s1);
	return 0;
}


