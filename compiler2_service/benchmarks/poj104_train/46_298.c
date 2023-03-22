#include <header.h>

int main_bench()
{
	int i, j, k;
	int sz[100][100];
	int row,col;
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	for(k=0;k<(col+1)/2;k++){
		for(i=k,j=k;j<col-k;j++){
			my_printf("%d\n",sz[i][j]);
		}
		if(2*k==row-1){break;}
		for(i=k+1,j=col-k-1;i<row-k;i++){
			my_printf("%d\n",sz[i][j]);
		}
		if(2*k==col-1){break;}
		for(i=row-k-1,j=col-k-2;j>=k;j--){
			my_printf("%d\n",sz[i][j]);
		}
		if(2*k==row-2){break;}
		for(j=k,i=row-k-2;i>k;i--){
			my_printf("%d\n",sz[i][j]);
		}
		if(2*k==col-2){break;}
	}
	return 0;
}
