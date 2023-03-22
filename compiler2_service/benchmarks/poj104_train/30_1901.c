#include <header.h>


int main_bench()
{   int n,i,s=0;
    my_scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(i%7==0)
		{ s=s+0;
		}
		else if (i/10==7)
		{ s=s+0;
		}
		else if( i%10==7)
		{ s=s+0;
		}
		else
		{ s=s+i*i;
		}
	}
	my_printf("%d",s);
	
	return 0;
}
