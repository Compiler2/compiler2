#define NUM_ITER 8322

#include <header.h>

int main_bench()
{
	int n, i, j, cal;
	cal=1;
	int pd=0;
	int sz[300];
	int xsz[300];
	my_scanf("%d", &n);
	for(i=0;i<n;i++)
			my_scanf("%d",&sz[i]);
	xsz[0]=sz[0];
	for(j=1;j<n;j++){
		pd=0;
		for(i=0;i<j;i++){
			if(sz[i]==sz[j])
			pd=1;
		}
		if(pd==0){
		xsz[cal]=sz[j];
			cal++;
		}
	}
	for(i=0;i<cal-1;i++)
	my_printf("%d,", xsz[i]);
	my_printf("%d", xsz[cal-1]);
	return 0;
}