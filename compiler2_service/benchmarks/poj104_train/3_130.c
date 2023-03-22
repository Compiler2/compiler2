#define NUM_ITER 54777

#include <header.h>

int main_bench()
{
	int n,k,a[1000],i,j,t=0;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);}
	for(i=0;i<n/2+1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k) {t=1;break;}
		}
		if(t==1) break;
	}
	if(t==1)my_printf("yes");
	else my_printf("no");
	return 0;
}

