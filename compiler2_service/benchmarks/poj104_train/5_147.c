#include <header.h>

int main_bench()
{
    char a[501]={'\0'},b[501]={'\0'};
	double n;
	my_scanf("%lf",&n);
	my_scanf("%s",a);
	my_scanf("%s",b);
	int x,y;
	x=strlen(a);
	y=strlen(b);
	if(x!=y)
	{
		my_printf("error");
	}
	else
	{
		int count=0,so=0;
		double rate;
		for(int i=0;i<x;i++)
		{
			if(a[i]==b[i])
			{
				count++;
			}
			if( (a[i]!='A' && a[i]!='T' && a[i]!='C' && a[i]!='G') || (b[i]!='A' && b[i]!='T' && b[i]!='C' && b[i]!='G') )
			{
				my_printf("error");
				so=100;
				break;
			}
		}
		if(so!=100)
		{
		    rate=count*1.0/x;
		    if(rate>n)
			{
			    my_printf("yes");
			}
		    else 
			{
		    	my_printf("no");
			}
		}
	}
    return 0;
}
