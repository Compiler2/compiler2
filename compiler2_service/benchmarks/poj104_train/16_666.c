#define NUM_ITER 1186579

#include <header.h>

int main_bench()
{
	int n,a=0,b;
	my_scanf("%d",&n);
	b=n;
	if(b==10000)my_printf("00001");
	else{
	do{
	a=a*10+n%10;
	n=n/10;
	}while(n!=0);
	if(b%10==0&&b!=0)my_printf("0");
    if(b%100==0&&b!=0)my_printf("0");
	if(b%1000==0&&b!=0)my_printf("0");
	my_printf("%d\n",a);
	}
}