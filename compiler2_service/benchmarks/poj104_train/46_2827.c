#define NUM_ITER 504

#include <header.h>

int main_bench() {
	int row,col,xxrow,sxrow,xxcol,sxcol,i,j,sz[100][100];
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	i=0;
	j=0;	
	xxrow=0;
	sxrow=row-1;
	xxcol=0;	
	sxcol=col-1;
	while(xxrow<sxrow&&xxcol<sxcol){
		for(j=xxcol;j<sxcol;j++)
			my_printf("%d\n",sz[xxrow][j]);
		for(i=xxrow;i<sxrow;i++)
			my_printf("%d\n",sz[i][sxcol]);
		for(j=sxcol;j>xxrow;j--)
			my_printf("%d\n",sz[sxrow][j]);
		for(i=sxrow;i>xxrow;i--)
			my_printf("%d\n",sz[i][xxcol]);
		xxrow++;
		sxrow--;
		xxcol++;
		sxcol--;
	}
	if(xxrow==sxrow||xxcol==sxcol){
		if(xxrow==sxrow&&xxcol!=sxcol){
			for(j=xxcol;j<=sxcol;j++)
				my_printf("%d\n",sz[xxrow][j]);
		}
		if(xxrow!=sxrow&&xxcol==sxcol){
			for(i=xxrow;i<=sxrow;i++)
				my_printf("%d\n",sz[i][xxcol]);
		}
		if(xxrow==sxrow&&xxcol==sxcol)
			my_printf("%d\n",sz[xxrow][xxcol]);
	}
	return 0;
}


