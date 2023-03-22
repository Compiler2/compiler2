#define NUM_ITER 892792

#include <header.h>

int main_bench()
{
	int a[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	int n;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<12;i++){
		if((a[i]-1+n)%7==5)
			my_printf("%d\n",i+1);
	}
	
	
	return 0;
}

