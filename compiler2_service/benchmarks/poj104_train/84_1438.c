#define NUM_ITER 55480

#include <header.h>


int main_bench()
{
	int a;
	int b;
	int i=1;
	int m=0,n=0;
	my_scanf("%d\n",&a);
	while(i<=a)
	{
		my_scanf("%d\n",&b);
			if(b>=m)
			{
				n=m;
				m=b;
			}
			if(b<m&&b>n)
			{
				n=b;
			}
			i++;
	}
		my_printf("%d\n",m);
		my_printf("%d\n",n);

    
	return 0;
}