#include<stdio.h>  
    struct Student  
    {  
        int num;  
        char name[20];  
        int score[3];  
    };  
int input(struct Student stu[]);  
int print(struct Student stu[]);  
int main()  
{  
    
    struct Student stu[5];  
     input(stu);  
         print(stu);  
   
}  
    
int print(struct Student stu[])  
{  
     int i,j;  
     for(i=0;i<5;i++)  
     { printf("%5d%10s\t",stu[i].num,stu[i].name);    
         for(j=0;j<3;j++)  
              printf("%d\t",stu[i].score[j]);  
            printf("\n");      
     }  
       
}  
  
int input(struct Student stu[])  
{  
      int i,j;  
     for(i=0;i<5;i++)  
     { printf("NO.:");  
     scanf("%d",&stu[i].num);  
     printf("name:");  
     scanf("%s",&stu[i].name);    
     for(j=0;j<3;j++)  
         {  
            printf("stu[%d].score[%d]:",i+1,j+1);  
            scanf("%d",&stu[i].score[j]);  
         };  
                
      printf("\n");    
     }  
          
}  






