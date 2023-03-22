#define NUM_ITER 562

#include <header.h>

main_bench()
{
      int row,col,time=0,n,i,j;
      int array[100][100];
      my_scanf("%d %d",&row,&col);
      for(i=0;i<row;i++)
      for(j=0;j<col;j++)
      my_scanf("%d",&array[i][j]);
      for(n=0;n<row+col;n++)
      {
                            if(col<row)
                            {
                                       if(n<col)
                                       {
                                                for(i=0;i<=n;i++)
                                                my_printf("%d\n",array[i][n-i]);
                                       }
                                       else if(n<row)
                                       {
                                            for(i=col-1;i>=0;i--)
                                            my_printf("%d\n",array[n-i][i]);
                                       }
                                       else 
                                       {
                                            for(i=col-1;i>n-row;i--)
                                            my_printf("%d\n",array[n-i][i]);
                                       }
                            }
                            else if(row<col)
                            {
                                       if(n<row)
                                       {
                                                for(i=0;i<=n;i++)
                                                my_printf("%d\n",array[i][n-i]);
                                       }
                                       else if(n<col)
                                       {
                                            for(i=0;i<=row-1;i++)
                                            my_printf("%d\n",array[i][n-i]);
                                       }
                                       else 
                                       {
                                            for(i=col-1;i>n-row;i--)
                                            my_printf("%d\n",array[n-i][i]);
                                       }
                            }
                            else if(row==col)
                            {
                                       if(n<row)
                                       {
                                                for(i=0;i<=n;i++)
                                                my_printf("%d\n",array[i][n-i]);
                                       }
                                       
                                       else 
                                       {
                                            for(i=row-1;i>n-col;i--)
                                            my_printf("%d\n",array[n-i][i]);
                                       }
                            }
      }
}     
