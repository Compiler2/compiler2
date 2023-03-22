#define NUM_ITER 3121

#include <header.h>

int main_bench()
{
	int a[300],i,j,b[300],n,e,k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		e=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]&&i>j){
				e=1;
			}
		}
		if(e==0){
			b[k]=a[i];
			k=k+1;
		}
	}
	for(i=0;i<k-1;i++){
		my_printf("%d",b[i]);
		my_printf(",");
	}
	my_printf("%d",b[k-1]);
	return 0;
}