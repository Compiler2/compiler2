#include <header.h>

int main_bench()
{
	int M,m,n,i,a1,a2,a;
	my_scanf("%d",&n);
	my_scanf("%d%d",&a1,&a2);
    if(a1>a2)
	{
		M=a1;
		m=a2;
	}
	else
	{
		M=a2;
		m=a1;
	}
	for(i=3;i<=n;i++)
	{
		my_scanf("%d",&a);
	    if(m>a)
		{
			M=M;
			m=m;
		}
		else
		{
			if(a>M)
			{
				m=M;
				M=a;
			}
			else
			{
				M=M;
				m=a;
			}
		}
	}
	my_printf("%d\n%d",M,m);
	return 0;
}