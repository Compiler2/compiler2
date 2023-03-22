#define NUM_ITER 1217

#include <header.h>

int main_bench()
{
	int n,t,i,tem,sum,p=0;
	my_scanf("%d",&n);
	while (n-->0)
	{
		my_scanf("%d",&t);
		if (t==0)
		{
			my_printf("60\n");
			continue;
		}
		sum=0;
		p=0;
		for (i=0;i<t;i++)
		{
			my_scanf("%d",&tem);
			sum=(i+1)*3+tem;
			if (sum>=60&&p==0)
				if (sum<=63&&p==0)
				{
					my_printf("%d\n",tem);
					p=1;
				}
				else
				{
					my_printf("%d\n",60-i*3);
					p=1;
				}
		}
		if (p==0) 
			if (tem+t*3>=60)
                my_printf("%d\n",tem);
			else
				my_printf("%d\n",60-3*t);
	}
	return 0;
}