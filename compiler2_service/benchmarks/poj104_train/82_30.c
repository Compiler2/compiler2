#define NUM_ITER 31158

#include <header.h>

int main_bench()
{ 
	int i,n,x[200];
	int t=0;
	int s=0;
	int max(int x,int y);
	my_scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
	my_scanf ("%d %d",&x[(2*i)],&x[(2*i+1)]);
	}
    for (i=0;i<n;i++)
	{
		if (
			(x[(2*i)]<=140)
			&&(x[(2*i)]>=90)
			&&(x[(2*i+1)]<=90)
			&&(x[(2*i+1)]>=60)
			)
	   {
	    s=s+1;
		}
	    else 
		{
			t=max (t,s);
		    s=0;
		}
	
	}
	t=max (t,s);
	my_printf ("%d",t);
	return 0;
}
int max(int x,int y)
{
int z;
if (x>y) z=x;
else z=y;
return(z);
}