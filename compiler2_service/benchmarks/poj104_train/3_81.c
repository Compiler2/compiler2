#define NUM_ITER 57512

#include <header.h>








int main_bench()
{
	int n,k;
	int t;

	my_scanf("%d%d",&n,&k);

	int *a;
	a=(int *)malloc(sizeof(int )*n);

	int i,j;

	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++){
		t=k-a[i];
		for(j=0;j!=i&&j<n;j++){
			if(t==a[j]){
				my_printf("yes\n");
				return 0;
			}
		}
	}

	my_printf("no\n");

	return 0;
}

