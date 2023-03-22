#define NUM_ITER 1469445

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,m;
	my_scanf("%d",&n);
	a=n/10000;
	b=(n-a*10000)/1000;
	c=(n-a*10000-b*1000)/100;
	d=(n-a*10000-b*1000-c*100)/10;
	e=(n-a*10000-b*1000-c*100-d*10)/1;
	if (a!=0)
	{
		m=e*10000+d*1000+c*100+b*10+a;
		my_printf("%d\n",m);
	}
	if(a==0&&b!=0)
	{
		m=e*1000+d*100+c*10+b*1;
	   my_printf("%d\n",m);   
	}
	if(a==0&&b==0&&c!=0)
	{
	      m=e*100+d*10+c*1;
		  my_printf("%d\n",m);
	}
	if(a==0&&b==0&&c==0&&d!=0)
	{
	       m=e*10+d*1;
		   my_printf("%d\n",m);
	}
	if(a==0&&b==0&&c==0&&d==0&&e!=0)
	{
	          m=e;
			  my_printf("%d\n",m);
	}
	return 0;

}

