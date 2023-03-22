#include <header.h>


main_bench()
{
    int a[100][100],b[100][100],c[100][100];
    int x1,y1,x2,y2,t,i,j;
    my_scanf("%d %d",&x1,&y1);
    for(t=0;t<x1*y1;t++)
    {
        i=t/y1;j=t%y1;
        my_scanf("%d",&a[i][j]);
    }
    my_scanf("%d %d",&x2,&y2);
    for(t=0;t<x2*y2;t++)
    {
        i=t/y2;j=t%y2;
        my_scanf("%d",&b[i][j]);
    }
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y2;j++)
        {
            c[i][j]=0;
            int q,t;
            for(q=0;q<y1;q++)
            {
                t=a[i][q]*b[q][j];
                c[i][j]+=t;
            }
            if(j==0) my_printf("%d",c[i][j]);
            else my_printf(" %d",c[i][j]);
            if(j==y2-1)my_printf("\n");
        }
    }
}
