#define NUM_ITER 1444065

#include <header.h>

int main_bench()
{
	char t;
	int i,k,m,a,b;
	my_scanf("%d",&a);
	b=0;
	m=0;
	while(my_scanf(",%d",&i))
	{
		if(i>a)
		{
			b=a;
			a=i;
			m=0;
		}
		if(i==a)
			m=1;
		if(i<a&&i>b)
		  b=i;

	}
	if(b==0)
		my_printf("No");
	if(b>0)
		my_printf("%d",b);
	
}