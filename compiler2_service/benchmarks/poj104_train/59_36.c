#include <header.h>

int main_bench()
{
    int n,m,num=0;
    char c[102][102],tmp[102][102];
    int i,j,d;
    my_scanf("%d\n",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n+1;j++)
        {
            my_scanf("%c",&c[i][j]);
        }
    }
    my_scanf("%d",&m);
    for (d=1;d<m;d++)
    {
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=n;j++)
            {
                if (c[i][j]=='#') tmp[i][j]='#';
                else tmp[i][j]='.';
            }
        }
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=n;j++)
            {
                if (c[i][j]=='@')
                {
                    tmp[i][j]='@';
                    if (tmp[i][j-1]!='#') tmp[i][j-1]='@';
                    if (tmp[i][j+1]!='#') tmp[i][j+1]='@';
                    if (tmp[i-1][j]!='#') tmp[i-1][j]='@';
                    if (tmp[i+1][j]!='#') tmp[i+1][j]='@';
                }
            }
        }
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=n;j++) c[i][j]=tmp[i][j];
        }
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++) if (c[i][j]=='@') num++;
    }
    my_printf("%d\n",num);
    return 0;
}
