#include <header.h>

int main_bench(){
	int sz[5][5],a,b,m,n,t;
	for(a=0;a<5;a++){
		for(b=0;b<5;b++){
			if(b<4){
				my_scanf("%d",&sz[a][b]);
			}else{
				my_scanf("%d\n",&sz[a][b]);
			}
		}
	}
	my_scanf("%d%d",&n,&m);
	if(0<=n&&n<=4&&0<=m&&m<=4){
		for(b=0;b<5;b++){
			t=sz[n][b];
			sz[n][b]=sz[m][b];
			sz[m][b]=t;
		}
		for(a=0;a<5;a++){
			for(b=0;b<5;b++){
				if(b<4){
					my_printf("%d ",sz[a][b]);
				}else{
					my_printf("%d\n",sz[a][b]);
				}
			}
		}
	}else{
		my_printf("error");
	}
	return 0;
}