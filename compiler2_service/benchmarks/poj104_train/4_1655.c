#define NUM_ITER 695

#include <header.h>

int ROW,COL;
int row=-1,col=1;
int array[100][100];
int move(){
	row++;
	col--;
	my_printf("%d\n",array[row][col]);
	return 0;
}
int big_move(){
	if(row+col<COL-1){
		col=row+col+1;
		row=0;
	}
	else{
		row=row+col-COL+2;
		col=COL-1;
	}
	my_printf("%d\n",array[row][col]);
	return 0;
}
int main_bench(){
	my_scanf("%d%d",&ROW,&COL);
	int r,c;
	for(r=0;r<ROW;r++){
		for(c=0;c<COL;c++){
			my_scanf("%d",&array[r][c]);
		}
	}
	if (ROW==1&&COL==1){
		my_printf("%d",array[0][0]);
		return 0;
	}
	while(row!=ROW-1||col!=COL-1){
		while(col!=0&&row!=ROW-1)
			move();
		big_move();
	}
	return 0;
}