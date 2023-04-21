#define NUM_ITER 57833

#include <header.h>

int main_bench()
{
	int i,n,k=0;
	my_scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{      
		if((i%7)!=0&&(i%10)!=7&&(i<70))
		{
			k=k+i*i;
		}
                if((i%7)!=0&&(i%10)!=7&&(i>79))
		{
			k=k+i*i;
		}
	}
	my_printf("%d",k);
	return 0;
}

