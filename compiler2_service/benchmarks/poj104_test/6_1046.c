#define NUM_ITER 31

#include <header.h>



int main_bench(){ 
    int he,m,n,k,sz[100][100];
	int i,j;
    my_scanf("%d",&k); 
	for(i=0;i<k;i++){
		my_scanf("%d%d",&m,&n);
        for(j=0;j<m;j++){
			for(int q=0;q<n;q++){
				my_scanf("%d",&sz[j][q]);
			}
		}
		if(m==1&&n==1){
			my_printf("%d\n",sz[0][0]);
		}else{
		he=0;
		for(j=0;j<m;j++){
			if(m==1){
				he+=sz[j][0];
			}else{
			he+=sz[j][0]+sz[j][n-1];
			}
		}
		for(j=1;j<n-1;j++){
			if(n==1){
				he+=sz[0][j];
			}else{
				he+=sz[0][j]+sz[m-1][j];
			}
		}
		my_printf("%d\n",he);
	}
	}
        return 0; 
      
} 
