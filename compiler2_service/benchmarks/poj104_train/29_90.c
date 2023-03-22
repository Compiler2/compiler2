#define NUM_ITER 4183

#include <header.h>

int main_bench(){
	int n,i,j,k,sz[100],sx[100],sc[100];
	double sum=0;
	
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		my_scanf("%d\n",&sc[i]);
	}
	for(j=0;j<n;j++){
		if(sc[j]==1){
			my_printf("2.000\n");
		}else if(sc[j]==2){
			my_printf("3.500\n");
		}else{
		for(k=2;k<sc[j];k++){
sz[0]=2;
	sx[0]=1;
	sz[1]=3;
		
	sx[1]=2;
			sz[k]=sz[k-1]+sz[k-2];                  
			sx[k]=sx[k-1]+sx[k-2];
			sum+=(double)sz[k]/(double)sx[k];                                                                                                            
		}my_printf("%.3lf\n",sum+3.5);
		sum=0;
		}
	}            
	return 0;
}