#include <stdio.h>
#include <math.h>

#define sum 3

//ˮ�ɻ�����Narcissistic number��Ҳ����Ϊ����ȫ���ֲ�������pluperfect digital invariant, PPDI����
//������������������ķ˹׳����ķ˹��������Armstrong number����ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
//���磺1^3 + 5^3+ 3^3 = 153

int shuixianhua(int n)
{
	if(n>99 && n<1000)
	{
		int i = n%10;
		int j = ((n/10)%10); 
		int k = n/100;
		if(n == (pow(i,sum) + (pow(j,sum)) + (pow(k,sum))))
		{
			return n;
		}
		else
		{
			return 0;
		}
	}
	else if(n>999 && n<10000)
	{
		int i = n%10; 
		int j = ((n%100)/10);
		int k = ((n/100)%10);
		int s = n/1000;
		if(n == (pow(i,sum) + pow(j,sum) + pow (k,sum) + pow(s,sum)))
		{
			return n;
		}
		else
		{
			return 0;
		}
	}
	else if(n>9999 && n<100000)
	{
		int i = n%10;
		int j = ((n/1000)%10);
		int k = ((n%1000)/100);
		int s = ((n%100)/10);
		int u = n/10000;
		if(n == (pow(i,sum) + pow(j,sum) + pow (k,sum) + pow(s,sum) + pow(u,sum)))
		{
			return n;
		}
		else
		{
			return 0;
		}
	}
}

int main()
{
	int i = 0;
	int ret = 0;
	printf("1~100000��ˮ�ɻ�����:>>");
	for (i=100;i<100000;i++)
	{
		ret = shuixianhua(i);
		if(ret != 0)
		{
			printf("%d  ",ret);
		}
	}
	return 0;
}

//ˮ�ɻ���һ�����ĸ�����153��370��371��407��

//�ϸ���˵3λ����3�������ų�Ϊˮ�ɻ�����λ���������������Ӧ�ĳƺ����������£�

//��λ����Ҷõ��������3����1634��8208��9474��

//��λ�������������3����54748��92727��93084��

//��λ��������ֻ��1����548834��

//��λ�ı�������������4����1741725��4210818��9800817��9926315��

//��λ�İ���������3����24678050��24678051��88593477��

/*
int main()
{
	int i = (pow(1,3) + pow(5,3) + pow(3,3));
	printf("%d",i);
}
*/
