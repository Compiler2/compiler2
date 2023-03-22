#define NUM_ITER 2088784

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,s;
	my_scanf("%d",&n);
	if(n==10000) my_printf("00001");
	else if(n==1000) my_printf("0001");
	else if(n==100) my_printf("001");
	else if(n==10) my_printf("01");
	else
	{
		if(n/1000>0)
		{
		    a=n%10;
		    b=((n-a)/10)%10;
	 	    c=((n-a-b*10)/100)%10;
		    d=n/1000;
		    s=a*1000+b*100+c*10+d;
			my_printf("%d",s);
		}
		else
		{
			if(n/100>0)
			{
				a=n%10;
				b=((n-a)/10)%10;
				c=n/100;
				s=a*100+b*10+c;
				my_printf("%d",s);
			}
			else
			{
				if(n/10>0)
				{
					a=n%10;
					b=n/10;
					s=a*10+b;
					my_printf("%d",s);
				}
				else my_printf("%d",n);
			}
		}
	}
	return 0;
}
	
