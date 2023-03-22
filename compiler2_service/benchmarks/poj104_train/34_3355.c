#include <header.h>

int outcome(int n)
{
	int t;
	if (n%2==0)
		t=n/2;
	else t=3*n+1;
	return (t);
}
int main_bench()
{
	int n,t,i;
	my_scanf("%d",&n);
	t=n;
	for(i=0;t!=1;i++)
	{
	    if (t%2==0)
			my_printf("%d/2=%d\n",t,outcome(t));
		else
		    my_printf("%d*3+1=%d\n",t,outcome(t));
		t=outcome(t);
	}

	my_printf("End");
}