#define NUM_ITER 31

#include <header.h>

int main_bench()
{
    int sz[100][100];
    int m,n,k,x;
    x=0;
    my_scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
    my_scanf("%d %d",&m,&n);
    for(int row=0;row<m;row++)
    {
            for(int col=0;col<n;col++)
            {
                    my_scanf("%d",&sz[row][col]);
            }
    }
    for(int row=0;row<m;row++)
    {
            x+=sz[row][0];
    }
    for(int col=1;col<n;col++)
    {
            x+=sz[0][col];
    }
    for(int row=1;row<m;row++)
    {
            x+=sz[row][n-1];
    }
    for(int col=1;col<n-1;col++)
    {
            x+=sz[m-1][col];
    }
    my_printf("%d\n",x);
    x=0;    
    }
return 0;
}