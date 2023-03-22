#include <header.h>

int main_bench(){
	int n,i,j,a[10000]={1,1},sz[10000];
    my_scanf("%d",&n);
	for(i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
	    for(j=0;j<sz[i];j++){
			a[j+2]=a[j+1]+a[j];			
        }
		my_printf("%d\n",a[sz[i]-1]);
	}
	return 0;
}