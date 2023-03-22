#define NUM_ITER 1459

#include <header.h>

int main_bench()
{
	int N,i,j;
	int n,t,p,c;
	my_scanf ("%d",&N);
	for (i=0;i<N;i++)
	{
		my_scanf ("%d",&n);
		t = c =0;
		for (j=1;j<=n;j++)
		{
			my_scanf ("%d",&p);
			if (t<60)
			{
				c = p;
			    t = c+j*3;
			}
		}
		if (t>63)  c = c - (t-63);
		else if (t<60) c = c + 60 - t;
		my_printf ("%d\n",c);
	}
	

	return 0;
}
