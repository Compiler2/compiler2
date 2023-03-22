#include <header.h>

int main_bench()
{
	int i,n[100][100],col,row,COL,ROW;
	my_scanf("%d %d",&ROW,&COL);
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			my_scanf("%d",&n[row][col]);
		}
	}
	for(i=0;i<COL+ROW-1;i++){
		if(i<COL){
			col=i;
			row=0;
			while(col>=0&&row<ROW){
				my_printf("%d\n",n[row][col]);
				col-=1;
				row+=1;
			}
		}
		else if(i>=COL){
			col=COL-1;
			row=i-COL+1;
			while(col>=0&&row<ROW){
				my_printf("%d\n",n[row][col]);
				col-=1;
				row+=1;
			}
		}
	}
	return 0;
}
