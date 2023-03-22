#define NUM_ITER 57

#include <header.h>

int main_bench()
{
    int a[101][101],i,j,k,n,d;
    char b,t;
    my_scanf("%d",&n);
    my_scanf("%c",&t);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            my_scanf("%c",&b);
            if(b=='.') a[i][j]=-1;
            else if(b=='@') a[i][j]=0;
            else a[i][j]=-2;
        }
        my_scanf("%c",&t);
    }
    my_scanf("%d",&d);
    
    for(k=0;k<d-1;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i][j]==k)
                {
                    if(a[i-1][j]==-1)
                        a[i-1][j]=k+1;
                    if(a[i+1][j]==-1)
                        a[i+1][j]=k+1;
                    if(a[i][j+1]==-1)
                        a[i][j+1]=k+1;
                    if(a[i][j-1]==-1)
                        a[i][j-1]=k+1;
                }
            }
        }
    }
    k=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(a[i][j]>=0) k++;
    my_printf("%d",k);
 
    return 0;
}


