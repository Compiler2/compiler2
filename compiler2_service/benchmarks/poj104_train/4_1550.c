#include <header.h>



int main_bench()
{
	int row,col,i,j;
	int array[100][100];
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<row+col;i++){
		for(j=0;j<=i;j++){
			if(j>row-1||i-j>col-1)
				continue;
			if(j<row&&i-j<col)
				my_printf("%d\n",array[j][i-j]);
		}
	}
	return 0;
}
