#define NUM_ITER 219214

#include <header.h>

int main_bench(){
	int sz[5][5];
	int i,k,e,a,n,m;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			my_scanf("%d",&sz[k][i]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(n<5&&m<5){
		for(i=0;i<5;i++){
			e=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=e;
		}
		a=1;
	}else{
		a=0;
	}
	if(a==1){
		for(k=0;k<5;k++){
			my_printf("%d %d %d %d %d\n",sz[k][0],sz[k][1],sz[k][2],sz[k][3],sz[k][4]);
		}
	}else if(a==0){
		my_printf("error");
	}
	return 0;
}