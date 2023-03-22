#define NUM_ITER 1967902

#include <header.h>

int main_bench()
{
	int n,a1,a2,a3,a4;
	my_scanf("%d",&n);
	if (n>=1000)
	{a4=n/1000;
	 a3=(n-a4*1000)/100;
	 a2=(n-a4*1000-a3*100)/10;
	 a1=n-a4*1000-a3*100-a2*10;
	 my_printf("%d%d%d%d",a1,a2,a3,a4);
	}
	if (n>=100 && n<1000)
	{a3=n/100;
	 a2=(n-a3*100)/10;
	 a1=n-a3*100-a2*10;
	 my_printf("%d%d%d",a1,a2,a3);
	}
	if (n>=10 && n<100)
	{a2=n/10;
	 a1=n-a2*10;
	 my_printf("%d%d",a1,a2);
	}
	if (n<10)
	{my_printf("%d",n);
	}
	return 0;
}
