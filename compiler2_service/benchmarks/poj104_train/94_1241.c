#define NUM_ITER 2903

#include <header.h>

int main_bench(){ 
	int n,j,i,t,k=0,sr[501]={0},px[501]={0};
    my_scanf("%d",&n);
	for(i=1;i<=n;i++){
	my_scanf("%d",&sr[i]);
	}
    for(i=1;i<=n;i++){
		if(sr[i]%2==1){
		k++;
		px[i]=sr[i];}
	}
	for(j=1;j<=n;j++){
		for(i=1;i<n;i++){
			if(px[i]<px[i+1]){
			t=px[i];
			px[i]=px[i+1];
			px[i+1]=t;
			}
		}
	}
	for(i=k;i>=1;i--){
	my_printf("%d",px[i]);
	if(i==1){
	break;}
	my_printf(",");
	}




return 0;
}
