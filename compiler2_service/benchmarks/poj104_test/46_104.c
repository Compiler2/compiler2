#define NUM_ITER 566

#include <header.h>


int main_bench()
{
 int row,col;
 int i,j,k,time=0;
 my_scanf("%d%d",&row,&col);
 int array[100][100];

for(i=0;i<row;i++)
{
 for(j=0;j<col;j++)
 {
 my_scanf("%d",&array[i][j]);
 }
}

 for (k=0;;k++)
 {
          for (i=k;i<col-k;i++)
          {
            my_printf("%d\n",array[k][i]);
            time++;
          
          if(time==row*col)break;}
if(time==row*col)break;
          for (j=k+1;j<row-k;j++)
          { 
            my_printf("%d\n",array[j][col-k-1]);
            time++;
          
          if(time==row*col)break;}if(time==row*col)break;
          for (i=col-2-k;i>=k;i--)
          {
            my_printf("%d\n",array[row-k-1][i]);
            time++;
          
          if(time==row*col)break;}if(time==row*col)break;
          for (j=row-2-k;j>k;j--)
          { 
            my_printf("%d\n",array[j][k]);
            time++;
          
          if(time==row*col)break;
}if(time==row*col)break;
 }
return 0;
}