#include <header.h>

int main_bench(){
	int n,k,c,h=0;
	my_scanf("%d%d",&n,&k);
	int*za=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		my_scanf("%d",&(za[i]));
	}
		for(int m=0;m<n-1;m++){
			for(c=m+1;c<n;c++){
				if(za[m]+za[c]==k){
				h++;
				}
			}
		}
		if(h>0){
			my_printf("yes");
		}else{
			my_printf("no");
		}

	free(za);
	return 0;
}