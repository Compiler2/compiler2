#define NUM_ITER 710

#include <header.h>

int main_bench()
{
 int ROW,COL,b[100][100],row,col;
 my_scanf("%d",&ROW);
 my_scanf("%d",&COL);
 for(row=0;row<ROW;row++)
 {
  for(col=0;col<COL;col++)
  {
   my_scanf("%d",&(b[row][col]));
  }
 }
 row=0;
 col=0;
 int i=0,k=0;
 while(i<ROW&&k<COL)
 {
  for(col=k;col<COL-k;col++)
  {
   if(b[row][col]!=0)
   {
    my_printf("%d\n",b[row][col]);
    b[row][col]=0;
   }
   else
   {
    return 0;
   }
  }
  col--;
  for(row=1+i;row<ROW-i;row++)
  {
   if(b[row][col]!=0)
   {
    my_printf("%d\n",b[row][col]);
    b[row][col]=0;
   }
   else
   {
    return 0;
   }
  }
  row--;
  for(col=col-1;col>=k;col--)
  {
   if(b[row][col]!=0)
   {
    my_printf("%d\n",b[row][col]);
    b[row][col]=0;
   }
   else
   {
    return 0;
   }
  }
  col++;
        i++;
  for(row=row-1;row>=i;row--)
  {
   if(b[row][col]!=0)
   {
    my_printf("%d\n",b[row][col]);
    b[row][col]=0;
   }
   else
   {
    return 0;
   }
  }
  row++;
  k++;
 }
 return 0;
}  
