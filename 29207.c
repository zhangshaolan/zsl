#include<stdio.h>
#include<string.h>
int main()
{
	void copy(char *p1,char *p2,int k);
	int m;
	char str1[20],str2[20];
	printf("input a string:");
	gets(str1);
	printf("�ӵڼ����ַ���ʼ��");
	scanf("%d",&m);
	copy(str1,str2,m);
	printf("�ƶ���%s",str2);
	return 0;
}
void copy(char *p1,char *p2,int m)
{
	int n;
	n=0;
	while(n<m-1)
	{
		n++;
		p1++;
	}
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';
}
