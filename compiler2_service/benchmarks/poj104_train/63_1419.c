#define NUM_ITER 31

#include <header.h>

int main_bench()
{
    int x1,y1,x2,y2,i,j,m,n;
    int a[100][100],b[100][100],c[100][100]={0};
    my_scanf("%d %d",&x1,&y1);
    for (i=0;i<x1;i++)
    {
        for (j=0;j<y1;j++)
        {
            my_scanf ("%d",&m);
            a[i][j]=m;
        }
    }
    my_scanf ("%d %d",&x2,&y2);
    for (i=0;i<x2;i++)
    {
        for (j=0;j<y2;j++)
        {
            my_scanf ("%d",&n);
            b[i][j]=n;
        }
    }
    for (i=0;i<x1;i++)
    {
        for (j=0;j<y2;j++)
        {
            for (int t=0;t<y1;t++)
            c[i][j]=c[i][j]+a[i][t]*b[t][j];
        }
    }
    for (i=0;i<x1;i++)
    {
        for (j=0;j<y2;j++)
        {
            if (j==0) my_printf ("%d",c[i][j]);
            else my_printf (" %d",c[i][j]);
        }
        my_printf ("\n");
    }
    
    return 0;
}   
    