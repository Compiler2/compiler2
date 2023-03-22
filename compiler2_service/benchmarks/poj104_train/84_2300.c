#define NUM_ITER 5796

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int sz[100];
	for (int i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	int maxIndex, e;
for(int k  =   1  ;   k <=  n; k++){
	maxIndex = 0;
	for(int i = 0; i <= n-k; i++){
			if(sz[i] > sz[maxIndex]){
					maxIndex = i;
			}
	}	
	if(maxIndex != n-k){
		e = sz[maxIndex];
		sz[maxIndex] = sz[n-k];
		sz[n-k] =  e;
	}
}
 my_printf("%d\n",sz[n-1]);
		my_printf("%d\n",sz[n-2]);
	return 0;
}
