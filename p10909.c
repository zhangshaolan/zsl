#include<stdio.h>
int main()
{
	int num;
	int i1;
	int i2;
	int i3;
	int i4;
	int i5;
	printf("������һ��������5λ��������:");
	scanf("%d",&num);
	i1=num/10000;
	i2=num%10000/1000;
	i3=num%1000/100;
	i4=num%100/10;
	i5=num%10;
	if(num>9999)
	{
		printf("�������һ��5λ����");
		printf("\n��λ��Ϊ%d\n,ǧλ��Ϊ%d\n,��λ��Ϊ%d\n,ʮλ��Ϊ%d\n,��λ��Ϊ%d\n",i1,i2,i3,i4,i5);
		printf("����Ϊ%d%d%d%d%d",i5,i4,i3,i2,i1);
	}
	else if(num>999)
	{
		printf("�������һ��4λ����");
		printf("\nǧλ��Ϊ%d\n,��λ��Ϊ%d\n,ʮλ��Ϊ%d\n,��λ��Ϊ%d\n",i2,i3,i4,i5);
		printf("����Ϊ%d%d%d%d",i5,i4,i3,i2);
	}
	else if(num>99)
	{
		printf("�������һ��3λ����");
		printf("\n��λ��Ϊ%d\n,ʮλ��Ϊ%d\n,��λ��Ϊ%d\n",i3,i4,i5);
		printf("����Ϊ%d%d%d",i5,i4,i3);
	}
	else if(num>9)
	{
		printf("�������һ��2λ����");
		printf("\nʮλ��Ϊ%d\n,��λ��Ϊ%d\n",i4,i5);
		printf("����Ϊ%d%d%",i5,i4);
	}
	else
	{
		printf("�������һ��1λ����");
		printf("\n��λ��Ϊ%d\n",i5);
		printf("����Ϊ%d",i5);
	}
	return 0;
}
