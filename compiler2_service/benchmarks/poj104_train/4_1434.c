#define NUM_ITER 564

#include <header.h>

int main_bench(){
	int array[100][100],ROW,COL,i=0,k=0,j=0;
		my_scanf("%d%d",&ROW,&COL);
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				my_scanf("%d",&array[i][j]);
			}
		}
	for (k=0; k<COL; k++) {
		for (i=0, j=k; i<ROW&& j>=0; i++, j--){
            my_printf("%d\n",array[i][j]);
		}
	}
for (k=1; k<ROW; k++) {
	for ( i=k,  j=COL-1; i<ROW && j>=0; i++, j--){
my_printf("%d\n",array[i][j]);
}
}
	return 0;
}