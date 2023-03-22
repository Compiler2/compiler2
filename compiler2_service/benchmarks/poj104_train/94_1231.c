#define NUM_ITER 72

#include <header.h>

int main_bench(){
	int i,n,z=0,k,h=0;
	int sz[500];
	int mm[500];
	int xx[500];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
    for(i=0;i<n;i++){
		if(sz[i]%2==1){
			mm[z]=sz[i];
			z++;
		}
	}
	for(k=0;k<10000;k++){
		for(i=0;i<z;i++){
			if(k==mm[i]){
				xx[h]=k;
				h++;
				break;
			}
		}
	}
	for(i=0;i<(h-1);i++){
		my_printf("%d,",xx[i]);
	}
	my_printf("%d",xx[h-1]);
	return 0;
}

			
