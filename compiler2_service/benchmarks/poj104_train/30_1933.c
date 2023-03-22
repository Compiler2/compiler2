#define NUM_ITER 80698

#include <header.h>

int main_bench()
{
	int a,b,sum=0;
	my_scanf("%d",&b);
	for(a=1;a<=b;a++){
		if(a%7==0)continue;
		if(a%10==7)continue;
		if(a-a%10==70)continue;
		sum+=a*a;
	}
	my_printf("%d\n",sum);
	return 0;
}
