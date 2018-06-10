#include<stdio.h>
void main()
{
	void maxLen(char str[50]);
	char str[50];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º");
	gets(str);
	maxLen(str);
}
void maxLen(char str[50])
{
	int i;
	int j=1;
	int t=-1;
	int start=0;
	int m;
	int maxNUM(int num[50]);
	int num[50]={0};
	num[0]=-1;
	for(i=0;i<50;i++)
	{
		if(str[i]==' '||str[i]=='\0')
		{
			num[j]=i-t-1;
			t=i;
			j++;
		}
	}
	m=maxNUM(num);
	for(i=1;i<m;i++)
	{
		start+=(num[i]+1);
	}
	for(i=start;i<start+num[m];i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
int maxNUM(int num[50])
{
	int i, j;
	int max=num[0];
	for(i=0;i<50;i++)
	{
		if(max<num[i])
		{
			max=num[i];
			j=i;
		}
	}
	return(j);
}