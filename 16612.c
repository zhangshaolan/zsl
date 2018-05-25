#include<stdio.h>
int main()
{
	char string[20];
	int i;
	printf("ÇëÊäÈëÃÜÂë£º");
	gets(string);
	printf("key:");
	puts(string);
	for(i=0;i<20;i++)
	{
		if(string[i]>='a'&&string[i]<='z')
		{
			string[i]=27-(string[i]-96)+96;
		}
		if(string[i]>='A'&&string[i]<='Z')
		{
			string[i]=27-(string[i]-64)+64;
		}
	}

printf("\ntext:");
puts(string);
return 0;
}	
