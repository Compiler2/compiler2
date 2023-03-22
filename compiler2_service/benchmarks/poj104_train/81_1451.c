#include <header.h>


int change(int sz[5][5],int n,int m);
int main_bench()
{
	int sz[5][5],i,j,n,m;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	if(change(sz,n,m)){
		for(i=0;i<5;i++){
			for(j=0;j<4;j++){
				my_printf("%d ",sz[i][j]);	
			}
			if(j==4){
				my_printf("%d\n",sz[i][j]);
			}
		}	
	}else{
		my_printf("error");
	}
	return 0;
}

int change(int sz[5][5],int n,int m){
	int i,e;
	if((n>=0&&n<=4)&&(m>=0&&m<=4)){
		for(i=0;i<5;i++){
			e=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=e;
		}
		return 1;
	}else{
		return 0;
	}
}
