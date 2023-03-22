#define NUM_ITER 28

#include <header.h>

int main_bench(){
    int n,b,j,i,k;
    my_scanf ("%d",&n);    
    char c[102][102],d[102][102],ttt;
my_scanf ("%c",&ttt);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            my_scanf ("%c",&c[i][j]);
        }
        my_scanf ("%c",&ttt);
    }
    my_scanf ("%d",&b);
    for (i=1;i<=n;i++)
        {
            for (j=1;j<=n;j++)
            {
                d[i][j]=c[i][j];
            }
        }
    for (k=1;k<b;k++)
    {
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=n;j++)
            {
                if (c[i][j]=='@')
                {
                                 if (c[i+1][j]=='.')
                                 d[i+1][j]='@';
                                 if (c[i-1][j]=='.')
                                 d[i-1][j]='@';
                                 if (c[i][j+1]=='.')
                                 d[i][j+1]='@';
                                 if (c[i][j-1]=='.')
                                 d[i][j-1]='@';
                }
            }
        }
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=n;j++)
            {
                c[i][j]=d[i][j];
            }
        }
    }   
    int js=0;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (c[i][j]=='@')
            js++;
        }
    }
    my_printf ("%d",js);
    return 0;
}