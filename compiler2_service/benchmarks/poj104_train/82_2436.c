#define NUM_ITER 29873

#include <header.h>

int main_bench(){
	int S[100][2],n,i,j,k,K;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
		my_scanf("%d",&S[i][j]);
		k=0;
		K=0;
		for(i=0;i<n;i++){
			if((90<=S[i][0])&&(S[i][0]<=140)&&(60<=S[i][1])&&(S[i][1]<=90))
				k++;
			else {
				if(k>K){
					K=k;
				    k=0;
				}
				else k=0;
			}
		}
		if(k>K)
			K=k;
		my_printf("%d",K);
		return 0;
}