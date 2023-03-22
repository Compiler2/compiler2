#define NUM_ITER 545

#include <header.h>



int main_bench()
{
	int row,col,i,j;
	int a[101][101];
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&(a[i][j]));
		}
	}
	for(i=0;i<row+col;i++){
		if(i<col)
			j=0;
		else
			j=i-col+1;
		for(;j<=i && j<row;j++) {
			my_printf("%d\n",a[j][i-j]);
		}
	}
	return 0;
}
