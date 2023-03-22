#define NUM_ITER 223457

#include <header.h>


int SwapRow(int array[5][5],int row_n,int row_m)
{
	int col,a;
	if(row_n>=0&&row_n<5&&row_m>=0&&row_m<5){
		for(col=0;col<5;col++){
			a=array[row_n][col];
			array[row_n][col]=array[row_m][col];
			array[row_m][col]=a;
		}
		return 1;
	}
	else
		return 0;
}

int main_bench()
{
	int array[5][5],n,m,row,col;
	for(row=0;row<5;row++){
		for(col=0;col<5;col++)
			my_scanf("%d",&array[row][col]);
	}
	my_scanf("%d %d",&n,&m);
	if(0 == SwapRow(array,n,m))
		my_printf("error");
	else{
		for(row=0;row<5;row++){
			for(col=0;col<5;col++){
				if(col==4)
					my_printf("%d\n", array[row][col]);
				else
					my_printf("%d ", array [row][col]);
			}
		}
	}
	return 0;
}
