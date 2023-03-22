#define NUM_ITER 47

#include <header.h>


main_bench()
{
      int m,q;
      my_scanf("%d %d",&m,&q);
      int a[m][q] ;
      for(int i=0;i<m;i++)
      for(int t=0;t<q;t++)
      {
      my_scanf("%d",&a[i][t]);
      }
      int p,n;
      my_scanf("%d %d",&p,&n);
      int b[p][n] ;
      for(int i=0;i<p;i++)
      for(int t=0;t<n;t++)
      {
      my_scanf("%d",&b[i][t]);
      }
      int c[m][n];
      for(int i=0;i<m;i++)
      for(int t=0;t<n;t++)
{
      c[i][t]=0;
      for(int s=0;s<p;s++)
      {
        c[i][t]+=(a[i][s]*b[s][t]);
        }
        if(t!=(n-1))
        my_printf("%d ",c[i][t]);
        else  my_printf("%d\n",c[i][t]);     
     
      }
 
      }
