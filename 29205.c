#include <stdio.h>
#define N 5               //人数
void  main()
{
    int a[N] = {0}, i = 0, out_n = 0, call_n = 0, *p;
    p = a;
    while (1)  {                //循环报数
      if(*p == 0)  
	  {                        //如果健在
        if (out_n == (N - 1)) 
		{
			break;
		}                       //如果仅剩一人,退出循环
        call_n++;         //报数
        call_n %= 3;      //最大为3，到了3就从0开始
        if(call_n == 0) 
		{
			*p = 1;
			out_n++;
		}                 //为0(即3)出局人+1
      }
      p++;    
	  if (p == a + N)  
	  {
		  p = a;  
	  }                    //循环转向下一人
    }
    printf("最后剩余者的编号是：%d\n", p + 1 - a);
}
