#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int upper=0;
	int lower=0;
	int digit=0;
	int space=0;
	int other=0;
	char ch[3][80];
	for(i=0;i<3;i++)
	{
		printf("请输入第%d行的字符：",i+1);
		gets(ch[i]);
		for(j=0;j<80&&ch[i][j]!=0;j++)
		{
			if(ch[i][j]>='A'&&ch[i][j]<='Z')
			{
				upper++;
			}
			else if(ch[i][j]>='a'&&ch[i][j]<='z')
			{
				lower++;
			}
			else if(ch[i][j]>='0'&&ch[i][j]<='9')
			{
				digit++;
			}
			else if(ch[i][j]=' ')
			{
				space++;
			}
			else
			{
				other++;
			}	
		}
	}
	printf("大写字母数为：%d\n小写字母数为：%d\n数字个数为：%d\n空格个数为：%d\n其他个数为：%d\n",upper,lower,digit,space,other);
	
	 
	return 0;
}
