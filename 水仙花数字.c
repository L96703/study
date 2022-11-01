#include <stdio.h>
#include <math.h>

#define sum 3

//水仙花数（Narcissistic number）也被称为超完全数字不变数（pluperfect digital invariant, PPDI）、
//自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身。
//例如：1^3 + 5^3+ 3^3 = 153

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
	printf("1~100000的水仙花数字:>>");
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

//水仙花数一共有四个，即153，370，371，407。

//严格来说3位数的3次幂数才称为水仙花数。位数更多的有其他相应的称呼，具体如下：

//四位的四叶玫瑰数共有3个：1634，8208，9474；

//五位的五角星数共有3个：54748，92727，93084；

//六位的六合数只有1个：548834；

//七位的北斗七星数共有4个：1741725，4210818，9800817，9926315；

//八位的八仙数共有3个：24678050，24678051，88593477。

/*
int main()
{
	int i = (pow(1,3) + pow(5,3) + pow(3,3));
	printf("%d",i);
}
*/
