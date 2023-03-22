#define NUM_ITER 18047

#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
	int z[1000];
	int x[1000];
	my_scanf("%d",&n);
	for(a=0;a<=n-1;a++)
	{
		my_scanf("%d",&z[a]);
	}
	a=0;
	b=0;
    while(a<=n-1)
	{
        if(z[a]%2!=0) 
		{
		x[b]=z[a];
		b=b+1;
        }
		a=a+1;
	}
	for(a=0;a<=b-1;a++)
	{
		for(c=0;c<b-1-a;c++)
		{
			if(x[c]>x[c+1])
			{
				d=x[c];
				x[c]=x[c+1];
				x[c+1]=d;
			}
		}
	}
	for(a=0;a<=b-1;a++)
	{
		if (a<=b-2)
		my_printf("%d,",x[a]);
		else my_printf("%d",x[a]);
	}
	return 0;
}

