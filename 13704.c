#include<stdio.h>
int main()
{
	char c;
	int letters=0;
	int space=0;
	int numbers=0;
	int others=0;
	printf("请输入一行字符:");
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
	printf("字母个数为:%d\n空格数为:%d\n数字个数为:%d\n其他字符个数为:%d\n",letters,space,numbers,others);
	return 0;
}
