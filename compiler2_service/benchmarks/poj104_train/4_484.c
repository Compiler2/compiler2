#define NUM_ITER 549

#include <header.h>

int main_bench(){
    int row,col;
    my_scanf("%d%d",&row,&col);
    int array[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            my_scanf("%d",&array[i][j]);
            }
        }
    int p=0,q=0;
       while(p<row&&q<col){
         int e=0;
         while(p+e<row&&q-e>=0){
              my_printf("%d\n",array[p+e][q-e]);
              e++;
              }
         if(q<col-1){
            q++;
            }
         else if(q==col-1){
             p++;
             }
         }
    return 0;
}