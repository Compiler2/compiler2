#define NUM_ITER 31

#include <header.h>

int main_bench()
{
 int a,k,i,j,row,col;
 int sx_row,sx_col,s;
 my_scanf("%d",&k);
 for(a=0;a<k;a++)
 {
s=0;  
my_scanf("%d %d",&row,&col);
     int sz[100][100];
     for(i=0;i<row;i++)
  {
      for(j=0;j<col;j++)
   {
       my_scanf("%d",&sz[i][j]);
   }
  }
     sx_row=row-1;
     sx_col=col-1;
  for(j=0;j<sx_col;j++)
  {
   s=s+sz[0][j];
  }
  for(i=0;i<sx_row;i++)
  {
   s=s+sz[i][sx_col];
  }
  for(j=sx_col;j>0;j--)
  {
   s=s+sz[sx_row][j];
  }
  for(i=sx_row;i>0;i--)
  {
   s=s+sz[i][0];
  }
  my_printf("%d\n",s);
 }
 return 0;
}