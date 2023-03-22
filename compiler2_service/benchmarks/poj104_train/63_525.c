#include <header.h>

int main_bench()
{
    int a[100][100],b[100][100],c[100][100],x1,y1,x2,y2,i,j,m,q;
    my_scanf("%d %d",&x1,&y1);
    for(i=0;i<x1;i++)
    for(j=0;j<y1;j++)
    my_scanf("%d",&a[i][j]);
    my_scanf("%d %d",&x2,&y2);
    for(i=0;i<x2;i++)
    for(j=0;j<y2;j++)
    my_scanf("%d",&b[i][j]);
    m=x2<=y1?x2:y1;
    for(i=0;i<x1;i++)
    for(j=0;j<y2;j++)
    for(q=0;q<m;q++)
    {
        if(q==0)c[i][j]=0;
        c[i][j]+=a[i][q]*b[q][j];   
    }
    for(i=0;i<x1-1;i++)
    {
        for(j=0;j<y2-1;j++)
        my_printf("%d ",c[i][j]);
        my_printf("%d\n",c[i][j]);
    }
    for(j=0;j<y2-1;j++)
    my_printf("%d ",c[i][j]);
    my_printf("%d",c[i][j]);
}
    