#include <header.h>

int sushu(int a);
int main_bench(){
	int m,n,i,j,sz[5][5];
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d%d",&m,&n);
	if(m>4||m<0||n>4||n<0){
		my_printf("error");
	}
	else{
		for(i=0;i<=4;i++){
			j=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=j;
		}
		for(i=0;i<=4;i++){
			for(j=0;j<=4;j++){
				if(j!=4){
					my_printf("%d ",sz[i][j]);
				}
				if(j==4){
					my_printf("%d\n",sz[i][j]);
				}
			}
		}
	}
	my_scanf("%d",&m);
	return 0;
}