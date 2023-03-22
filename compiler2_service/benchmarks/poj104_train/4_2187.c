#include <header.h>

int main_bench()
{
  int row,col;
  my_scanf("%d %d",&row,&col);
  int array[row][col];
  int i,j,k,l;
  for(i=0;i<row;i++)
  for(j=0;j<col;j++)
  my_scanf("%d",&array[i][j]);
  for(k=0;k<col+row-1;k++)
  for(l=0;k-l>-1;l++)
  if(k-l<col&&l<row)
  my_printf("%d\n",array[l][k-l]);
  return 0;
}
  