#define NUM_ITER 583

#include <header.h>

int main_bench()
{
  int row,col,i,j,u[100][100],a,sum=0;
  my_scanf("%d%d",&row,&col);
  for(i=0;i<row;i++)
   {
      for(j=0;j<col;j++)
      {
         my_scanf("%d",&u[i][j]);
       }
   } 
  for(a=0;a<row/2+1;a++)
  {
      for(i=a,j=a;j<col-a;j++)
      {
        my_printf("%d\n",u[i][j]);
        sum++;
        if(sum==row*col)
             break;
      }
      if(sum==row*col)
             break;
      for(j=col-a-1,i=a+1;i<row-a;i++)
      {
        my_printf("%d\n",u[i][j]);
        sum++;
        if(sum==row*col)
             break;
       }
       if(sum==row*col)
             break;

      for(i=row-a-1,j=col-a-2;j>=a;j--)
        {
        my_printf("%d\n",u[i][j]);
        sum++;
       if(sum==row*col)
             break;
       }
       if(sum==row*col)
             break; 
      for(j=a,i=row-a-2;i>a;i--)
        {
        my_printf("%d\n",u[i][j]);
        sum++;
       if(sum==row*col)
             break;
       }
	   if(sum==row*col)
             break;
  }
  
  return 0;
}
