#define NUM_ITER 584

#include <header.h>

int main_bench()
{
 int row,col;
 int i,j,n;
 int t=0;
 int array[100][100];
 my_scanf("%d %d",&row,&col);
 for(i=0;i<row;i++)
  for(j=0;j<col;j++)
   my_scanf("%d",&array[i][j]);
  for (n=0;n<row;n++)
  { 
   for (i=n;i<col-n;i++)
   {
    my_printf("%d\n",array[n][i]);
    t++;
   }
   my_printf("\n");
   if(t==row*col)
	   break;
   for (j=n+1;j<row-n;j++)
   {
    my_printf("%d\n",array[j][col-n-1]);
    t++;
   }
   my_printf("\n");
   if(t==row*col)
	   break;
   for (i=col-2-n;i>=n;i--)
   {
    my_printf("%d\n",array[row-n-1][i]);
    t++;
   }
   my_printf("\n");
   if(t==row*col)
	   break;
   for (j=row-2-n;j>n;j--)
   {
    my_printf("%d\n",array[j][n]);
    t++;
   }
   my_printf("\n");
   if(t==row*col)
	   break;
  }
  return 0;
}
