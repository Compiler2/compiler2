#define NUM_ITER 36510

#include <header.h>


int main_bench()
{
	int n,i,j,sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{for(j=i;j>0;j=(j-(j%10))/10)
	   if(j%10==7) break;
	   if(i%7!=0&&j<=0)sum+=i*i;}
		
		my_printf("%d",sum);

	return 0;
}
