#include <stdio.h>
#include <string.h>
 
void swap(char *p1,char *p2)
{
    char temp[100]; 
	strcpy(temp,p1);
	strcpy(p1,p2);
	strcpy(p2,temp);
}

int main()
{
    char a[100],b[100],c[100],* p1,* p2,* p3;
	printf("请输入3个字符串：\n");
    gets(a);
    gets(b);
    gets(c);
    p1=a;
    p2=b;
    p3=c;
   
    
	if(strcmp(a,b)>0)
	{
		swap(a,b);
	}
	if(strcmp(a,c)>0)
	{
		swap(a,c);

	}
	if(strcmp(b,c)>0)
	{
		swap(b,c);
	}

    printf("由小到大：\n%s\n%s\n%s\n",p1,p2,p3);
    return 0;
}