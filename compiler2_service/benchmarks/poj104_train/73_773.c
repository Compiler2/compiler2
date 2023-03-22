#define NUM_ITER 213853

#include <header.h>

int main_bench()
{
    int a[5][5],i,j,max,b,c,m=0;
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                    my_scanf("%d",&a[i][j]);
                    }

    }

     for(i=0;i<5;i++)
    {
                    max=0;
                    for(j=0;j<5;j++)
                    {
                                    if(max<a[i][j])
                                    {
                                                   max=a[i][j];
                                                   b=i;
                                                   c=j;
                                    }
                    }
                    if(max<=a[0][c]&&max<=a[1][c]&&max<=a[2][c]&&max<=a[3][c]&&max<=a[4][c])
                    {
                    m=1;
                    break;
                    }

    }
    if(m)
    my_printf("%d %d %d",b+1,c+1,a[b][c]);
    else
    my_printf("not found");
    return 0;
}