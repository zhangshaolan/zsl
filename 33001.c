#include<stdio.h>  
    struct Date  
    {  
        int year;  
        int month;  
        int day;  
    };  
int days(int year,int month,int day);  
int main()  
{  
  struct Date p;
  printf("�������꣺");
  scanf("%d",&p.year );
  printf("�������£�");
  scanf("%d",&p.month  );
  printf("�������գ�");
  scanf("%d",&p.day );

    
  days(p.year,p.month,p.day); 
  return 0;

   
}  
    
int days(int year,int month,int day)  
{  
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};    
            int sum,i;  
            sum=day;  
            for(i=0;i<month-1;i++)
			{
				sum+=a[i];
			}
  if(((year%4==0&&year%100!=0)||year%400==0)&&month>2)
  {
       printf("��������%d���еĵ�%d��", year,sum+1);
  }
  else
  {
	  printf("��������%d���еĵ�%d��", year,sum);
  }
}  
