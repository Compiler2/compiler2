#define NUM_ITER 56015

#include <header.h>

int main_bench() {
    int n,i,j,sz[100],chance[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&sz[i]);
	for(j=0;j<n-1;j++){
		chance[j]=sz[i-1];
		my_printf("%d ",chance[j]);
		i--;
	}
	j+=1;
	chance[j]=sz[i-1];
	my_printf("%d",chance[j]);
	return 0;
}
