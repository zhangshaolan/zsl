#include<stdio.h>
int main()
{
	char c;
	int letters=0;
	int space=0;
	int numbers=0;
	int others=0;
	printf("������һ���ַ�:");
	while((c=getchar())!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='z'))
			letters++;
		else if(c==' ')
			space++;
		else if(c>='0'&&c<='9')
			numbers++;
		else
			others++;
	}
	printf("��ĸ����Ϊ:%d\n�ո���Ϊ:%d\n���ָ���Ϊ:%d\n�����ַ�����Ϊ:%d\n",letters,space,numbers,others);
	return 0;
}
