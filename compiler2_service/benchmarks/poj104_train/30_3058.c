#define NUM_ITER 111902

#include <header.h>

int main_bench()
{
	int n,a,b,i;
	int sum=0;
	my_scanf("%d",&n);
	if (n<10)
	{
		for(i=0;i<=n;i++)
		if(i%7!=0)
			sum=sum+i*i;
    my_printf("%d",sum);
    }
	else
    {
		for(i=0;i<=n;i++)
		if(i%7!=0)
		{
			a=i/10;
		    b=i-a*10;
			if(a!=7 && b!=7)
        
				sum=sum+i*i;
		}
	          my_printf("%d",sum);
	}
	return 0;
}