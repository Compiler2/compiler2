#define NUM_ITER 586

#include <header.h>

int main_bench()
{
	int col,row,ROW,COL,n[100][100],i,b=0,N;
	my_scanf("%d %d",&ROW,&COL);
	N=ROW*COL;
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			my_scanf("%d",&n[row][col]);
		}
	}
	for(i=0;;i++){
		if(b<N){
		for(col=i,row=i;col<(COL-i);col++){
			if(b<N){
				my_printf("%d\n",n[row][col]);
				b+=1;
			}else break;
		}
		for(col=COL-1-i,row=i+1;row<ROW-i;row++){
			if(b<N){
				my_printf("%d\n",n[row][col]);
				b+=1;
			}else break;
		}
		for(row=ROW-1-i,col=COL-2-i;col>=i;col--){
			if(b<N){
				my_printf("%d\n",n[row][col]);
				b+=1;
			}else break;
		}
		for(col=i,row=ROW-2-i;row>=i+1;row--){
			if(b<N){
				my_printf("%d\n",n[row][col]);
				b+=1;
			}else break;
		}
		}else break;
	}
	return 0;
}
