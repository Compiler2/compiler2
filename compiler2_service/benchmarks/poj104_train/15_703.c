#define NUM_ITER 567

#include <header.h>

int main_bench(){
	int n,a[1000][1000],b[1000][1000],row,col,ROW1,COL1,ROW2,COL2,sum;
		my_scanf("%d",&n);
		for(row=0;row<n;row++){
			for(col=0;col<n;col++){
				my_scanf("%d",&a[row][col]);
			}
		}
	for(row=0;row<n;row++){
			for(col=0;col<n;col++){
				if(a[row][col]==0){
				ROW1=row;
				COL1=col;
					break;
				}
			}
		}
for(row=n-1;row>=0;row--){
			for(col=n-1;col>=0;col--){
				if(a[row][col]==0){
					ROW2=row;
					COL2=col;
					break;
				}
			}
		}
sum=(ROW2-ROW1+1)*(COL1-COL2+1);

my_printf("%d",sum);

	return 0;
}
