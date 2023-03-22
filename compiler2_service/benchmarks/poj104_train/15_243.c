#define NUM_ITER 694

#include <header.h>


int main_bench()
{
	int n,i=0,j;
	int N,k,p;
	my_scanf ("%d",&n);
	N=n*n;
	for (k=0;k<N;k++)
	{
		my_scanf ("%d",&p);
		if (p==0)
			i++;
	}
	j=((i/4)-1)*((i/4)-1);
    my_printf ("%d\n",j);
}