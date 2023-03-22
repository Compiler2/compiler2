#define NUM_ITER 67000

#include <header.h>


int main_bench()
{
	int n;
	int sum=0;
	my_scanf("%d",&n);
	int i=1;
	for(; i<=n;i++){
		if(i%7==0 || (i>11)&&(int)(i/10)%7==0 || (i>7) && i-((int)(i/10))*10==7 )
			continue;
			sum+=i*i;
	}
	my_printf("%d", sum);
	return 0;
}