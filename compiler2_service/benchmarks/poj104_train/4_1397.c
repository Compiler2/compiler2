#define NUM_ITER 549

#include <header.h>

int main_bench()
{
    int row,col,a[100][100];
    int i,j;
    my_scanf("%d %d",&row,&col);
    for(i=0;i<row;++i)
        for(j=0;j<col;++j)
            my_scanf("%d",a[i]+j);
    for(i=0;i<col;++i)
        for(j=0;(i-j>=0) && (j<row);++j)
            my_printf("%d\n",a[j][i-j]);
    for(i=1;i<row;++i)
        for(j=0;(j<col) && (i+j<row);++j)
            my_printf("%d\n",a[i+j][col-j-1]);
    return 0;
}