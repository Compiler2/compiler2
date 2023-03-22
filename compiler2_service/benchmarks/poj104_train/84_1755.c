#include <header.h>

int main_bench()
{
	int n,a,b,m;
   	my_scanf("%d",&n);
	for(a=0,b=0;n>0;n--)
	{
		my_scanf("%d",&m);
		if(m>a)
		{	b=a;
			a=m;
		
		
		}else if(m>b&&m<a)
		{
			b=m;
		
		
		}
	
	}
my_printf("%d\n%d",a,b);

	return 0;
}