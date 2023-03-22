#include <header.h>



int main_bench()
{
	int sz[100][100],i,row,col,j,k=0,min;
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	min=row;
	if(row>col){
		min=col;
	}
	while(k<(min+1)/2){
		for(j=0+k;j<col-k;j++){
			my_printf("%d\n",sz[0+k][j]);
		}
		for(i=1+k;i<row-k;i++){
			my_printf("%d\n",sz[i][col-1-k]);
		}
		for(j=col-2-k;j>-1+k;j--){
			if(row-1-k<=0+k){
				break;
			}
			my_printf("%d\n",sz[row-1-k][j]);
		}
		for(i=row-2-k;i>k;i--){
				if(k>=col-1-k){
				break;
			}
			my_printf("%d\n",sz[i][k]);
		}
		k+=1;
	}
	
	return 0;
}
