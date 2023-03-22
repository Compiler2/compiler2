#define NUM_ITER 184910

#include <header.h>

int main_bench()
{
	long int x[4];
    int i,t;
	for(i=0;i<4;i++)
	{
		my_scanf("%ld",&x[i]);
	    while (x[i]>0)

		{
		t=x[i]%10;
		my_printf("%d",t);
		x[i]=(x[i]-t)/10;
		}
	    my_printf("\n");
	}
		return 0;
}