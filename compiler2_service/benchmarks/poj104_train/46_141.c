#define NUM_ITER 556

#include <header.h>

int main_bench()
{
    int i,j,row,cow,a[100][100];
    my_scanf("%d%d",&row,&cow);
    for(i=0;i<row;i++)
    {
                      for(j=0;j<cow;j++)
                      {
                                        my_scanf("%d",&a[i][j]);
                      }
                      if(i!=row-1)
                      my_printf("\n");
    }
    i=0;
    while(row-i-i>1&&cow-i-i>1)
    {
                                   for(j=i;j<cow-i;j++)
                                   {
                                                       my_printf("%d\n",a[i][j]);
                                   }
                                    for(j=i+1;j<row-i;j++)
                                   {
                                                       my_printf("%d\n",a[j][cow-i-1]);
                                   }
                                    for(j=cow-2-i;j>=i;j--)
                                   {
                                                       my_printf("%d\n",a[row-1-i][j]);
                                   }
                                    for(j=row-2-i;j>=i+1;j--)
                                   {
                                                       my_printf("%d\n",a[j][i]);
                                   }
                                   i++;
    }
    if(row-i-i==1)
    {
                     for(j=i;j<cow-i;j++)
                                   {
                                                       my_printf("%d\n",a[i][j]);
                                   }
    }
    else if(cow-i-i==1)
    {
                     for(j=i;j<row-i;j++)
                                   {
                                                       my_printf("%d\n",a[j][i]);
                                   }
    }
    return 0;
}