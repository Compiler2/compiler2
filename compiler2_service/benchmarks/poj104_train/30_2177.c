#define NUM_ITER 82774

#include <header.h>


int main_bench()
{
    int n, i;
	int M = 0;
	my_scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		if(i<10)
		{
			if(i!=7)
				M = M + i*i;
			else
				M = M + 0;
		}
        else 
		{
			int a = i % 10;
			int b = (i - a) / 10;
			if(a!=7&&b!=7&&i%7!=0)
				M = M + i*i;
			else
				M = M + 0;
		}
	}
	my_printf("%d\n",M);
	return 0;
}