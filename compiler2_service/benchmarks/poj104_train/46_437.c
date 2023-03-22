#define NUM_ITER 580

#include <header.h>

int main_bench()
{
    int array[100][100],i,j,k,n,col,row;
    my_scanf("%d""%d",&row,&col);
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            my_scanf("%d",&array[i][j]);
        }
    }
    if (col>row)
        n=row;
    else if (col<row)
        n=col;
    else if (col==row)
        n=row;
    n=n/2-1;

    for (k=0;k<=n;k++)
    {
    for (i=k,j=k;j<col-1-k;j++)
    {
        my_printf("%d\n",array[i][j]);
    }
    for (i=k,j=col-1-k;i<row-1-k;i++)
    {
        my_printf("%d\n",array[i][j]);
    }
    for (i=row-1-k,j=col-1-k;j>k;j--)
    {
        my_printf("%d\n",array[i][j]);
    }
    for (i=row-1-k,j=k;i>k;i--)
    {
        my_printf("%d\n",array[i][j]);
    }

    }
    if (col>row&&row%2==1)
    {
                                    k=row/2;
                                    for (i=k,j=k;j<=col-1-k;j++)
                                    {
                                        my_printf("%d\n",array[i][j]);
                                    }
    }
    else if (col<row&&col%2==1)
    {
                                    k=col/2;
                                    for (i=k,j=k;i<=row-1-k;i++)
                                    {
                                        my_printf("%d\n",array[i][j]);
                                    }
    }
    else if (col==row&&col%2==1&&row%2==1)
    {
                 k=col/2;
                 my_printf("%d\n",array[k][k]);
    }
    else k=k;
    

  return 0;
}
