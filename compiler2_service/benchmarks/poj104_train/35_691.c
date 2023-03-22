#define NUM_ITER 3607

#include <header.h>

int main_bench()
{
	int col,row,COL,ROW,n[8][8],max,min,a=0,geshu=0,b=0;
	my_scanf("%d,%d",&ROW,&COL);
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			my_scanf("%d",&n[row][col]);
		}
	}
	for(row=0;row<ROW;row++){
		max=0;
		for(col=0;col<COL;col++){
			if(n[row][col]>max){
				max=n[row][col];
				a=col;
			}
		}
		min=n[row][a];
		for(row=0;row<ROW;row++){
			if(n[row][a]<min){
				min=n[row][a];
				b=row;
			}
		}
		if(max!=min){
			continue;
		}else{
			my_printf("%d+%d",b,a);
			geshu+=1;
			break;
		}
	}
	if(geshu==0){
		my_printf("No");
	}
	return 0;
}