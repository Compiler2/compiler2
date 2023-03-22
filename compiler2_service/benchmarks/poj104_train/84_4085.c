#define NUM_ITER 1427577

#include <header.h>

int main_bench()
{
    int n,a,b,f=0,s;
	my_scanf("%d\n",&n);
    my_scanf("%d\n",&a);
	for(;100>n&&n>1;n--)
	{
		
		my_scanf("%d\n",&b);
		b=a>b?a:b;
	    if(f<=b)
		{	s=f;
			f=b;
		}
		   else
			   s=b>s?b:s;

		
	}
    my_printf("%d\n",f);
	my_printf("%d",s);

}
