#define NUM_ITER 214018

#include <header.h>

int main_bench(){
	int x[100][100],n,m,i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d ",&x[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(n>=0&&n<5&&m>=0&&m<5){
		if(n<=m){
			for(i=0;i<n;i++){
				for(j=0;j<5;j++){
					if(j<4){
					my_printf("%d ",x[i][j]);
					}else{
						my_printf("%d\n",x[i][j]);
					}
				}
			}for(j=0;j<5;j++){
				if(j<4){
				my_printf("%d ",x[m][j]);
				}else{
					my_printf("%d\n",x[m][j]);
				}
			}for(i=n+1;i<m;i++){
				for(j=0;j<5;j++){
					if(j<4){
					my_printf("%d ",x[i][j]);
					}else{
						my_printf("%d\n",x[i][j]);
					}
				}
			}for(j=0;j<5;j++){
				if(j<4){
					my_printf("%d ",x[n][j]);
				}else{
					my_printf("%d\n",x[n][j]);
				}
				}
			for(i=m+1;i<5;i++){
				for(j=0;j<5;j++){
					if(j<4){
					my_printf("%d ",x[i][j]);
					}else{
						my_printf("%d\n",x[i][j]);
					}
				}
			}}else{
				for(i=0;i<m;i++){
				for(j=0;j<5;j++){
					if(j<4){
					my_printf("%d ",x[i][j]);
					}else{
						my_printf("%d\n",x[i][j]);
					}
				}
			}for(j=0;j<5;j++){
					if(j<4){
				my_printf("%d ",x[n][j]);
					}else{
						my_printf("%d\n",x[n][j]);
					}
			}for(i=m+1;i<n;i++){
				for(j=0;j<5;j++){
					if(j<4){
					my_printf("%d ",x[i][j]);
					}else{
						my_printf("%d\n",x[i][j]);
					}
				}
			}for(j=0;j<5;j++){
				if(j<4){
					my_printf("%d ",x[m][j]);
				}else{
					my_printf("%d\n",x[m][j]);
				}
				}
			for(i=n+1;i<5;i++){
				for(j=0;j<5;j++){
					if(j<4){
					my_printf("%d ",x[i][j]);
					}else{
							my_printf("%d\n",x[i][j]);
					}
				}
			}}}else{
				my_printf("error");
			}


	return 0;
}
