#define NUM_ITER 225091

#include <header.h>

int f(int n,int m){
	if(n>=5||m>=5||m<0||n<0){
		return 0;
	}else{
		return 1;
	}
}

int main_bench(){
	int a[5];
	int i,j,m,n;
	int sz[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	if(f(n,m)==0){
		my_printf("error");
	}else{
		for(i=0;i<5;i++){
			a[i]=sz[m][i];
			sz[m][i]=sz[n][i];
			sz[n][i]=a[i];
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j<=3) my_printf("%d ",sz[i][j]);
				else my_printf("%d\n",sz[i][j]);
			}
			
		}
	}
	return 0;
}