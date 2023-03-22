#include <header.h>

main_bench()
{
    int m,n,q,i,j,k;
    int a[101][101]={0};
    int b[101][101]={0};
    int c[101][101]={0};
    my_scanf("%d %d",&m,&q);
    for(i=0;i<=m-1;i++)
    {
       for(j=0;j<=q-1;j++)
       {
           my_scanf("%d",&a[i][j]);
       }
    }
    my_scanf("%d %d",&q,&n);
    for(i=0;i<=q-1;i++)
    {
       for(j=0;j<=n-1;j++)
       {
           my_scanf("%d",&b[i][j]);
       }
    }
    for(i=0;i<=m-1;i++)
    {
       for(j=0;j<=n-1;j++)
       {
           for(k=0;k<=q;k++)
           c[i][j]=a[i][k]*b[k][j]+c[i][j];
       }
    }
    for(i=0;i<=m-1;i++)
    {
       for(j=0;j<=n-1;j++)
       {
           if(j!=n-1) my_printf("%d ",c[i][j]);
           else my_printf("%d\n",c[i][j]);
       }
    }
    getchar();
    getchar();
}
