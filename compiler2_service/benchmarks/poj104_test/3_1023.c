#define NUM_ITER 52453

#include <header.h>

int main_bench(){
	int n, m, sz[1000], f=1;
	my_scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++){
		my_scanf("%d", &sz[i]);
	}
	for(int j=0; j<n-1&&f!=0; j++){
		for(int k=j+1; k<n&&f!=0; k++){
			if(sz[j]+sz[k]==m){
				my_printf("yes");
				f--;
			}
		}
	}
	if(f==1)
		my_printf("no");
	return 0;
}

				

