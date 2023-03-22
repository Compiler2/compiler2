#define NUM_ITER 514488

#include <header.h>

int main_bench()
{
	int a[9],n,k,i;
	my_scanf("%d",&n);k=n;
	for(i=0;i<9;i++)
	{
		a[i]=k%10;k=k/10;
	}
	  for(i=1;i<9;i++)
	  {
		a[i]=a[i-1]*10+a[i];
	  }
	k=a[8];
	    while(k%10==0)
		{
		  k=k/10;
		}
		my_printf("%d",k);
}