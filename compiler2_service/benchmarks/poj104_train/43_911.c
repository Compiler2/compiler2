#define NUM_ITER 28160

#include <header.h>

int main_bench()
{
	int m,a,b,i,j,p,q,s,t;
	my_scanf("%d",&m);
	for (a=3;2*a<=m;a=a+2)
	{
		q=1;t=1;
		for (i=3;i<a;i=i+2)
		{	
			p=(a%i!=0);q=q*p;
		}
		if (q!=0)
		{
			b=m-a;
			for (j=3;j<b;j=j+2)
			{
				s=(b%j!=0);t=t*s;
			}
			if (t!=0)
				my_printf("%d %d\n",a,b);
			else continue;
		}
		else continue;
	}
	return 0;
}