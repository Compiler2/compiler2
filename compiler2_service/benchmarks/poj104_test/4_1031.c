#define NUM_ITER 459

#include <header.h>

int main_bench()
{
    int num[101][101];
    int i,j,row,col;
    
    my_scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++)
    for(j=1;j<=col;j++)
    my_scanf("%d",&num[i][j]);
    my_printf("%d",num[1][1]);
    for(i=3;i<=col+row;i++)
    {
                           for(j=1;j<i;j++)
                           if(j<=row&&i-j<=col)
                           my_printf("\n%d",num[j][i-j]);
    }
    
    return 0;
}
