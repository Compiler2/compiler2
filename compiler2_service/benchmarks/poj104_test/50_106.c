#include <header.h>


int main_bench()
{int i,a,w=0,rizi=0,u;
	int yue[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	my_scanf("%d",&w);
	for(i=0;i<12;i++)
	{u=i+1;
rizi=yue[i]+12;
		a=rizi%7;
		if((w==1)&&(a==4))
		{my_printf("%d\n",u);}
		else if((w==2)&&(a==3))
{my_printf("%d\n",u);}
		else if((w==3)&&(a==2))
{my_printf("%d\n",u);}
		else if((w==4)&&(a==1))
{my_printf("%d\n",u);}
		else if((w==5)&&(a==0))
{my_printf("%d\n",u);}
		else if((w==6)&&(a==6))
{my_printf("%d\n",u);}
		else if((w==7)&&(a==5))
{my_printf("%d\n",u);}
	}
	return 0;
}