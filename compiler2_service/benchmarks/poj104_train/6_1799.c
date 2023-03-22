#define NUM_ITER 32

#include <header.h>

int main_bench(){
	int k,i;
	my_scanf("%d",&k);
	int m,n,j,l;
	int z[100][100],h[100];
	for(i=0;i<100;i++){
		h[i]=0;
	}
	for(l=0;l<k;l++){
		my_scanf("%d %d",&m,&n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				my_scanf("%d",&(z[i][j]));
			}
		}
		for(j=0;j<n;j++){
			h[l]+=z[0][j];
		}
		i=m-1;
		for(j=0;j<n;j++){
			h[l]+=z[i][j];
		}
		for(i=1;i<m-1;i++){
			h[l]+=z[i][0];
		}
		j=n-1;
		for(i=1;i<m-1;i++){
			h[l]+=z[i][j];
		}
	}
	for(l=0;l<k;l++){
		if(l==0){
		my_printf("%d",h[l]);
		}else{
			my_printf("\n%d",h[l]);
		}
	}
	return 0;
}