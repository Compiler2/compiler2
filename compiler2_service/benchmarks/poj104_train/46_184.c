#define NUM_ITER 551

#include <header.h>

int main_bench()
{
 int array[100][100],row,col,i,k,j,t=0;
 my_scanf("%d%d",&row,&col);
    int m=row*col;
 for(i=0;i<row;i++)
 {
  for(k=0;k<col;k++)
  {
   my_scanf("%d",&array[i][k]);
  }
 }

 for(j=0;;j++)
 {

  for(k=j;k<=col-1-j;k++)
  {
   my_printf("%d\n",array[j][k]);
   t++;
  }
  if(t==m) break;

  for(i=j+1;i<=row-1-j;i++)
  {
   my_printf("%d\n",array[i][col-j-1]);
   t++;
  }
  if(t==m) break;

  for(k=col-j-2;k>=j;k--)
  {
   my_printf("%d\n",array[row-j-1][k]);
   t++;
  }
  if(t==m) break;

  for(i=row-j-2;i>j;i--)
  {
   my_printf("%d\n",array[i][j]);
   t++;
  }
  if(t==m) break;
 }

    return 0;
}