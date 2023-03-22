#define NUM_ITER 1704

#include <header.h>


int main_bench(){
	int (sz[500]),(odd[500]);
	int j,i,n,k,a,e,g;
	my_scanf("%d",&n);
a=0;
	for(i=0;i<n;i++){
		my_scanf("%d",&(sz[i]));
		if((sz[i])%2!=0){
			a+=1;
		}
	}
	for(k=1;k<=n;k++){
	for(i=1;i<n;i++){
		if((sz[i])%2!=0){
			g=sz[i-1];
			sz[i-1]=sz[i];
			sz[i]=g;	
			}
		}
	}

	for(k=1;k<=a;k++){
		for(i=0;i<a-1;i++){
			if(sz[i+1]<sz[i]){
				e=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=e;
			}
		}
	}

for(i=0;i<a;i++){
	if(i<a-1){
		my_printf("%d,",sz[i]);
	}
	else{my_printf("%d",sz[i]);}
	}

return 0;

}