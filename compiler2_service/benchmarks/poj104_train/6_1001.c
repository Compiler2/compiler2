#define NUM_ITER 32

#include <header.h>

int main_bench()
{
    int i,k,row,col,ROW,sz[100][100],COL,sum[100];
    my_scanf("%d", &k);
    for(i=0;i<k;i++)
    {
                    sum[i]=0;
                    }
    for(i=0;i<k;i++)
    {
                     my_scanf("%d %d", &ROW, &COL);  
                     for(row=0;row<ROW;row++)
                     {
                                              for(col=0;col<COL;col++)
                                              {
                                                                      my_scanf("%d", &sz[row][col]);
                                              }
                                              }
                    if(ROW==1&&COL==1)
                    {
                                      sum[i]=sum[i]+sz[0][0];
                                      }
                     else   
                     {                       
                     for(col=0;col<COL;col++)
                     {
                                             sum[i]=sum[i]+sz[0][col]+sz[ROW-1][col]; 
                     }
                     for(row=1;row<(ROW-1);row++)
                     {
                                                 sum[i]=sum[i]+sz[row][0]+sz[row][COL-1];                         
                     }
                     }
    
    }
    for(i=0;i<k;i++)
    {
    my_printf("%d\n", sum[i]);
    }
my_scanf("%d", &k);
return 0;
}