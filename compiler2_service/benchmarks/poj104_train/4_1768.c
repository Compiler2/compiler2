#define NUM_ITER 549

#include <header.h>


int main_bench()
{
	int row,col,ROW,COL,array[100][100];
	my_scanf("%d %d",&ROW,&COL);
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			my_scanf("%d",&array[row][col]);
		}
	}
	if(ROW>1&&COL>1){
		for(col=0;col<COL;col++){
			for(row=0;row<ROW;row++){
				if(col-row<0)
					break;
				else
					my_printf("%d\n",array[row][col-row]);
			}
		}
		for(row=1;row<ROW-1;row++){
			for(col=COL-1;col>=0;col--){
				if(row+COL-1-col>ROW-1)
					break;
				else
					my_printf("%d\n",array[row+COL-1-col][col]);
			}
		}
	}
	if(ROW==1&&COL>1){
		for(col=0;col<COL-1;col++){
			my_printf("%d\n",array[0][col]);
		}
	}
	if(COL==1&&ROW>1){
		for(row=0;row<ROW-1;row++){
			my_printf("%d\n",array[row][0]);
		}
	}
	my_printf("%d",array[ROW-1][COL-1]);
	return 0;
}
