#define NUM_ITER 4158

#include <header.h>

int main_bench()
{
	int n,a[300],count;
	int i,j,k;
	my_scanf("%d",&n);
	count=n;
	for(i=0;i<n;i++) my_scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				for(k=i;k>0;k--) a[k]=a[k-1];					
				count--;
			}
		}
	}
	for(i=n-count;i<n-1;i++) my_printf("%d,",a[i]);
	my_printf("%d",a[n-1]);
	return 0;
}