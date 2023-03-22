#define NUM_ITER 41033

#include <header.h>

int main_bench()
{
	int n,i,sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i/100)!=7&&(i/10)%10!=7&&(i%7!=0)&&i!=7&&(i/10)!=7&&(i-i/10*10)!=7) sum+=i*i;
	}
	my_printf("%d",sum);
}

