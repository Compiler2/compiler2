#define NUM_ITER 28437

#include <header.h>

int main_bench(){
    int n,i,j;
	char sz[256];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",sz);
		for(j=0;sz[j];j++){
			if(sz[j]=='A'){
				sz[j]=sz[j]+19;
			}
			else if(sz[j]=='T'){
				sz[j]=sz[j]-19;
			}
			else if(sz[j]=='G'){
				sz[j]=sz[j]-4;
			}
			else if(sz[j]=='C'){
				sz[j]=sz[j]+4;
			}
		}
		my_printf("%s\n",sz);
	}
	return 0;
}
			
			

