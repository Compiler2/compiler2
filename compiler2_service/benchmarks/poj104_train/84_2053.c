#include <header.h>


int main_bench()
{
	int k,i=2,a,b,n,m;
	my_scanf("%d\n%d",&k,&m);
         a=m;
	b=m;
	while(i<=k)
	{
		my_scanf("%d",&n);
		if(n>a)
		{
			a=n;
		}
                  if(n<a&&n>b)
                  {
                           b=n;
                  }
		i++;
	}
	
	my_printf("%d\n%d\n",a,b);
	
	return 0;
}

