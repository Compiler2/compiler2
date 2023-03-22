#include <header.h>

int main_bench(){
int ROW,COL,row, col;
int k,i,j;
int sz[101][101];
my_scanf("%d %d",&ROW,&COL);
for(row=0;row<ROW;row++){
for(col=0;col<COL;col++){
my_scanf("%d",&sz[row][col]);}
} 
for (k=0; k<COL; k++) {
for (i=0, j=k; i<ROW && j>=0; i++, j--)
my_printf("%d\n",sz[i][j]);
}
for (k=1; k<ROW; k++) {
for (i=k, j=COL-1; i<ROW && j>=0; i++, j--)
my_printf("%d\n",sz[i][j]);
}
return 0;
}
