#define NUM_ITER 9118

#include <header.h>

int main_bench(){
	int n,sz[300],i,j,a[300],p=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	a[0]=sz[0];
	for(i=1;i<n;i++){
		for(j=0;j<p+1;j++){
			if(sz[i]==a[j]){
				break;
			}else if(sz[i]!=a[j]&&(j==p)){
				p++;
				a[p]=sz[i];
			}
		}
	}
	for(i=0;i<p;i++){
		my_printf("%d,",a[i]);
	}
	my_printf("%d",a[p]);
	return 0;
}

	