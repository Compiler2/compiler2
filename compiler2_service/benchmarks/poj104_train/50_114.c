#define NUM_ITER 560242

#include <header.h>

int main_bench()
{
	int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n,i,j,sum=0;
	my_scanf("%d",&n);
	for (i=1;i<=12;i++) {
		for(j=0;j<i-1;j++) {
			sum=sum+mth[j];
		}
		if ((sum+13+n-1)%7==5) {
			my_printf("%d\n",i);
		}
		sum=0;
	}
	return 0;
}

