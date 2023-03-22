#include <header.h>


int main_bench()
{
   int a[100][101],b[101][100],c[100][100],i,j,k,p,q,x,y,m,n,s;
   my_scanf("%d %d",&m,&q);
   for(i=0;i<m;i++)
   {
     for(j=0;j<(q-1);j++)
     {
       my_scanf("%d ",&a[i][j]);
     }
     my_scanf("%d",&a[i][q-1]);
   }
   my_scanf("%d %d",&q,&n);
   for(i=0;i<q;i++)
   {
     for(j=0;j<(n-1);j++)
     {
       my_scanf("%d ",&b[i][j]);
     }
     my_scanf("%d",&b[i][n-1]);
   }
   for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     { s=0;
       for(k=0;k<=q;k++)
       {
         s=s+a[i][k]*b[k][j];
       } 
       c[i][j]=s;
     
     }
   }
   for(i=0;i<m;i++)
   {
     for(j=0;j<(n-1);j++)
     {
       my_printf("%d ",c[i][j]);
     }
     my_printf("%d\n",c[i][n-1]);
   }



}
