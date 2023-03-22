#define NUM_ITER 583

#include <header.h>

int main_bench(){
	int sz[100][100],row,col;
	my_scanf("%d %d",&row,&col);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	int xx_row=0,sx_row=row-1;
	int xx_col=0,sx_col=col-1;
	int k,n;
	while(xx_row<sx_row&&xx_col<sx_col){
    	for(k=xx_col;k<=sx_col-1;k++){
	    	my_printf("%d\n",sz[xx_row][k]);
		}
		for(n=xx_row;n<=sx_row-1;n++){ 
		    my_printf("%d\n",sz[n][sx_col]);
		}
        for(k=sx_col;k>=xx_col+1;k--){
	    	my_printf("%d\n",sz[sx_row][k]);
		}
		for(n=sx_row;n>=xx_row+1;n--){
	    	my_printf("%d\n",sz[n][xx_col]);
		}
	xx_col++;
	sx_col--;
	xx_row++;
	sx_row--;
	}
	if(sx_row==xx_row){
		for(k=xx_col;k<=sx_col;k++){
			my_printf("%d\n",sz[sx_row][k]);
		}
	}else
		if(xx_row==sx_col){
			for(n=xx_row;n<=sx_row;n++){
				my_printf("%d\n",sz[n][sx_col]);
			}
		}
		return 0;
}