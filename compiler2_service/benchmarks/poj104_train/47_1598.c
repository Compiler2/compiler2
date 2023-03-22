#define NUM_ITER 55508

#include <header.h>

int main_bench()
{
	int n,zheng[100];
	int i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&zheng[n-i-1]);
	}
	for(i=0;i<n;i++){
		if(i<n-1){
			my_printf("%d ",zheng[i]);
		}else if(i==n-1){
			my_printf("%d",zheng[i]);
		}
	}
	return 0;
}