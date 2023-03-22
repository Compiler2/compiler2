#define NUM_ITER 85612

#include <header.h>



int main_bench()
{
	int n,i=1,sum1=0,sum2=0,sum;
	my_scanf("%d",&n);
	
		if(n<=9)
		{
            for(i=1;i<=n;i++)
			{
			if(i!=7)
			{
				sum1 = sum1 + i*i;
			}
			}
			my_printf("%d",sum1);
		
		}
		else
		{
			for(i=1;i<=n;i++)
			{
		    if(i<=9)
			{
				if(i!=7)
				{
			
				sum1 = sum1 + i*i;
				}
			}
			
			else
			{
				if((i/10!=7)&&(i%10!=7)&&(i%7!=0))
				{
					sum2 = sum2 + i*i;
				}
			}
			}
			sum = sum1 + sum2;
			my_printf("%d",sum);
		}
		return 0;
}
