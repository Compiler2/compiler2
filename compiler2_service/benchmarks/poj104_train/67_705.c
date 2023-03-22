#define NUM_ITER 24958

#include <header.h>

int main_bench()
{
	int n,i,a,b,m,j;
	double c,d,biao,e,f,g,t;
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	c=a*1.0000000;
	d=b*1.0000000;
	biao=d/c;
    for(i=1;i<n;i++)
	{
		my_scanf("%d%d",&m,&j);
	    e=m*1.0000000;
	    f=j*1.0000000;
	    g=f/e;
		t=g-biao;
		if(t>0.05) 
		{
			my_printf("better\n");
			continue;
		}
		if((biao-g)>0.05) 
		{
			my_printf("worse\n");
			continue;
		}
		my_printf("same\n");
	}
	return 0;
}
