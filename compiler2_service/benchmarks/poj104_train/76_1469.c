#define NUM_ITER 9808

#include <header.h>

int main_bench(){
    int max,min,n,i,j,x=0;
    my_scanf("%d",&n);
	int sx[50001],sy[50001],sz[50001]={0};
	for(i=0;i<n;i++){
	   my_scanf("%d %d",&(sx[i]),&(sy[i]));
	   }
	min=sx[0];
	max=sy[0];
	for(i=1;i<n;i++){
		if(min>sx[i]){
			min=sx[i];
		}
	}
	for(i=1;i<n;i++){
		if(max<sy[i]){
			max=sy[i];
		}
	}
	for(i=0;i<n;i++){
		for(j=sx[i];j<sy[i];j++){
			sz[j]=1;
		}
	}
	for(i=min;i<max;i++){
		if(sz[i]!=1){
			x++;
		}
	}
	if(x==0){
		my_printf("%d %d",min,max);
	}else{
		my_printf("no");
	}
	return 0;
	}