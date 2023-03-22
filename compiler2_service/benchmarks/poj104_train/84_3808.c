#define NUM_ITER 37743

#include <header.h>


int main_bench()
{
	int i,j,k;
	int n;
	my_scanf("%d",&n);
	int list[n];

	for (i=0; i<n; i++) {
		my_scanf("%d",&list[i]);
	}

	for (j=n-2;j>=n-3;j--) {
		for (k=0;k<=j;k++) {
			if (list[k] > list[k+1]) {
				list[k]=list[k]+list[k+1];
				list[k+1]=list[k]-list[k+1];
				list[k]=list[k]-list[k+1];
			}
		}
	}
	my_printf("%d\n%d",list[n-1],list[n-2]);

	return 0;
}
