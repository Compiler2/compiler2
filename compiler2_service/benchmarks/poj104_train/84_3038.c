#include <header.h>

int main_bench()
{
	int i,n;
	int t;
	int max,secondmax;
	my_scanf("%d%d",&n,&t);
	max=secondmax=t;
	for(i=1;i<n;i++)
	{
		my_scanf("%d",&t);
		if((t<max)&&(t>secondmax))
        {
			secondmax=t;
		}
		else 
			if(t>max)
		{
			secondmax=max;
            max=t;
		}
	}
	my_printf("%d\n%d",max,secondmax);
	return 0;
}