#define NUM_ITER 858595

#include <header.h>

int main_bench()
{
    int w,b[20],i,sum[20];
	my_scanf("%d",&w);
	int a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	for(i=0;i<12;i++)
	{
		if(i==0)
		{sum[i]=0;
		b[i]=(sum[i]+w-1+13)%7;
		}
		else
		{
		sum[i]=a[i]+sum[i-1];
		b[i]=(sum[i]+w-1+13)%7;
		}
		if (b[i]==5)
		{my_printf("%d\n",i+1);
		}
	}
	return 0;
}
