#define NUM_ITER 57246

#include <header.h>


int main_bench()
{
	int n,i,sum=0;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (i>=10)
		{
			if((i%7!=0)&&(i%10!=7)&&(((i-i%10)/10)%10!=7))
		    sum=sum+i*i;
		}
		else if(i!=7)
		{
			sum=sum+i*i;
		}
	}
	my_printf("%d",sum);
	return 0;
}

