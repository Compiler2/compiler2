#define NUM_ITER 32

#include <header.h>

int main_bench()
{
    int k,m[200],n[200],i,t,j,a[200][200],sum;
    my_scanf("%d", &k);
    for(i=1;i<=k;i++)
    {
                     
                     my_scanf("%d%d", &m[i], &n[i]);
                     for(t=1;t<=m[i];t++)
                     {
                                         for(j=1;j<=n[i];j++)
                                         {
                                                             my_scanf("%d", &a[t][j]);
                                         }
                     }
                     
                    if(m[i]==1&&n[i]==1)
                    my_printf("%d", a[1][1]);
                    else
                    {
                    
                     sum=0;
    
                      for(t=1;t<=n[i];t++)
                      {
                                          sum=sum+a[1][t];
                      }
                     
                      for(j=1;j<=n[i];j++)
                      {
                                          sum=sum+a[m[i]][j];
                      }
                     
                      for(t=1;t<=m[i];t++)
                      {
                                          sum=sum+a[t][1];
                      }
                     
                      for(j=1;j<=m[i];j++)
                      {
                                          sum=sum+a[j][n[i]];
                      }
                     
                      sum=sum-a[1][1]-a[1][n[i]]-a[m[i]][n[i]]-a[m[i]][1];
                      my_printf("%d\n", sum);
                      }
    }
    
    return 0;
}