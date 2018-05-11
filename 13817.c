#include<stdio.h>
int main()
{
	char a;      //a为A的对手
	char b;      //b为B的对手
	char c;       //b为B的对手
	for(a='X';a<='Z';a++)
	{
		for(b='X';b<='Z';b++)
		{
			if(a!=b)
			{
				for(c='X';c<='Z';c++)
					if(a!=c&&b!=c)
					{
						if(a!='X'&&c!='X'&&c!='Z')
						{
							printf("A VS %c\nB VS %c\nC vs %c\n",a,b,c);
						}
					}
			}
		}
	}
	return 0;
}

