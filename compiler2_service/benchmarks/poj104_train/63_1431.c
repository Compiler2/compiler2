#define NUM_ITER 65

#include <header.h>

int main_bench()
{
    int m,q,n,l,i,j,sum;
    int a[100][100],b[100][100],c[100][100];
    my_scanf("%d%d",&m,&q);
    for(i=0;i<100;i++)
     {for(j=0;j<100;j++)
      {my_scanf("%d",&a[i][j]);
       if(j==q-1) break;}
      if(i==m-1) break;}
    my_scanf("%d%d",&q,&n);
    for(i=0;i<100;i++)
     {for(j=0;j<100;j++)
     {my_scanf("%d",&b[i][j]);
      if(j==n-1) break;}
     if(i==q-1) break;}    
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
     {sum=0;
      for(l=0;l<q;l++)
       sum=sum+a[i][l]*b[l][j];
      c[i][j]=sum;}
    for(i=0;i<m;i++)
    {for(j=0;j<n-1;j++)
      my_printf("%d ",c[i][j]);
     my_printf("%d\n",c[i][n-1]);}
    
    return 0;
}