#define NUM_ITER 81518

#include <header.h>

int main_bench()
{
	int n,s=0;
	my_scanf("%d",&n);
	while(n>0){
		if((n%7!=0)&&(n%10!=7)&&(n-n%10!=70)){
		s=s+n*n;
		}
		n=n-1;
	}
	my_printf("%d",s);
	return 0;
}
		