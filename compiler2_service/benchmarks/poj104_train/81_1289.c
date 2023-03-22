#include <header.h>

int main_bench(){
	int i,n,m,j,k,r;
	int sz[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	if(!(n>=0&&n<=4&&m>=0&&m<=4)){
	my_printf("error");
	return 0;
	}else{
		m=n>m?n:m;
		n=m<n?m:n;
			for(i=n,k=i+1;k<5;k++){
				if(k==m){
					for(j=0;j<5;j++){
					r=sz[i][j];sz[i][j]=sz[k][j];sz[k][j]=r;
					}
				}
			}
	}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			my_printf("%d ",sz[i][j]);
		}	if(j==4){
				my_printf("%d\n",sz[i][j]);
			}
	}
	return 0;
}



