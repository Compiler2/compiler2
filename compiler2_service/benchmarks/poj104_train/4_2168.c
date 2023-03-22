#define NUM_ITER 564

#include <header.h>

int main_bench()
{
    int row,col;
    my_scanf("%d %d",&row,&col);
    int array[row][col];
    int i,j,k;
    for(i=0;i<row;i++){
                       for(j=0;j<col;j++){
                                          my_scanf("%d",&array[i][j]);
                                          }
                       }
    for(i=0;i<col;i++){
                       for(j=i,k=0;k<row && j>-1;j--,k++){
                                                 my_printf("%d\n",array[k][j]);
                                                 }
                       }
    for(i=1;i<row;i++){
                       for(j=i,k=col-1;j<row && k>-1;j++,k--){
                                                      my_printf("%d\n",array[j][k]);
                                                      }
                       }
    return 0;
}
