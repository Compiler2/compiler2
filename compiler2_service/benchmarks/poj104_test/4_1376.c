#define NUM_ITER 450

#include <header.h>

int main_bench()
{
  int row,col,a[100][100],i,k,j;
  my_scanf("%d %d",&row,&col);
  for(k=0;k<row;k++){
    for(i=0;i<col;i++){
      my_scanf("%d",&(a[k][i]));
    }
  }
  for(i=0;i<201;i++){
    k=0;
    j=i;
    while(j>=0){
      if(0<=j&&j<col&&0<=k&&k<row)my_printf("%d\n",a[k][j]);
      j--;
      k++;
    }
  }
  return 0;
}
