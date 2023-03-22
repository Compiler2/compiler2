#define NUM_ITER 31

#include <header.h>

int main_bench() {
	int k,m,n;
	int i,j,t;
	int sum;
	int z;
	my_scanf("%d",&k);
	for(t=0;t<k;t++) {
		my_scanf("%d%d",&m,&n);
		sum=0;
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				my_scanf("%d",&z);
				if(i==0 || i==m-1) sum+=z;
				else {
					if(j==0 || j==n-1) sum+=z;
				}
			}
		}
		my_printf("%d\n",sum);
	}
	return 0;
}