#define NUM_ITER 53169

#include <header.h>

int main_bench()
{
	int n, i, k, sz[100],max,max1;
	my_scanf("%d\n",&n);
	for(i=0;i<=n-1;i++){
	my_scanf("%d\n", &(sz[i]));
	}
	max=max1=sz[0];
		for(i=0; i<n; i++){
			if(sz[i]>max){
            max=sz[i];
			}
		}
		for(i=0; i<n; i++){
			if(sz[i]<max&&sz[i]>max1){
            max1=sz[i];
			}
		}
	my_printf("%d\n%d", max, max1);
	return 0;
}