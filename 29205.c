#include <stdio.h>
#define N 5               //����
void  main()
{
    int a[N] = {0}, i = 0, out_n = 0, call_n = 0, *p;
    p = a;
    while (1)  {                //ѭ������
      if(*p == 0)  
	  {                        //�������
        if (out_n == (N - 1)) 
		{
			break;
		}                       //�����ʣһ��,�˳�ѭ��
        call_n++;         //����
        call_n %= 3;      //���Ϊ3������3�ʹ�0��ʼ
        if(call_n == 0) 
		{
			*p = 1;
			out_n++;
		}                 //Ϊ0(��3)������+1
      }
      p++;    
	  if (p == a + N)  
	  {
		  p = a;  
	  }                    //ѭ��ת����һ��
    }
    printf("���ʣ���ߵı���ǣ�%d\n", p + 1 - a);
}
