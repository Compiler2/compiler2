#include <header.h>

int main_bench(){
	int i,j,row,col,n;
	int sz[100][100];
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	if(row>col){
	for(n=0;n<col;n++){
		for(i=0;i<col;i++){
			if(n-i>0||n-i==0){
			my_printf("%d\n",sz[i][n-i]);
			}
		}
	}
    for(n=col;n<col+row-1;n++){
        for(j=col-1;j>=0;j--){
			if(n-j<row){
			    my_printf("%d\n",sz[n-j][j]);
			}
		}
	}
	}else{
	for(n=0;n<col;n++){
		for(i=0;i<row;i++){
			if(n-i>0||n-i==0){	
			my_printf("%d\n",sz[i][n-i]);
			}
		}
	}
    for(n=col;n<col+row-1;n++){
        for(j=col-1;n-j<row;j--){
			    my_printf("%d\n",sz[n-j][j]);
		}
	}
	}
		
	return 0;
}

