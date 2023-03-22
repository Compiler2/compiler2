#include <header.h>

int main_bench()
{
int n,m=0,i;
my_scanf("%d",&n);
for(i=0;;i++)
{
	if(n==1)
	{
	    my_printf("End\n");
		break;
	}
	else
	{
		if(n%2==0)
		{
			m=n/2;
			my_printf("%d/2=%d\n",n,m);
			n=m;m=0;
		}
		else
		{
			m=3*n+1;
			my_printf("%d*3+1=%d\n",n,m);
			n=m;m=0;
		}
	}
}

return 0;
}
