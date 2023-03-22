#define NUM_ITER 812010

#include <header.h>

int main_bench()
{
	int n,i,j,k;
		my_scanf("%d",&n);
	    i=(n%10)*10+(n-n%10)/10;
		j=(n%10)*100+(n%100-n%10)+(n-n%100)/100;
		k=(n%10)*1000+(n%100-n%10)*10+(n%1000-n%100)/10+(n-n%1000)/1000;
		if(n%10==n)
			my_printf("%d",n);
		else if(n%100==n)
			my_printf("%02d",i);
		else if(n%1000==n)
			my_printf("%03d",j);
		else 
			my_printf("%04d",k);
		return 0;
}
