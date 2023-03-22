#include <header.h>

int main_bench()
{
    int a[105][105];
    long m,n,k,z,sum,i,j;
    my_scanf("%d",&z);
    for(i=1;i<=z;i++)
    {sum=0;
                     my_scanf("%d %d",&m,&n);
                    if(m>=2&&n>=2)
                    { for(j=1;j<=m;j++)
                     {
                                      for(k=1;k<=n;k++)
                     {
                                      my_scanf("%d",&a[j][k]);
                                      }
                                      }
                                      for(k=1;k<=n;k++)
                                      sum=sum+a[1][k]+a[m][k];
                                      for(j=2;j<=m-1;j++)
                                      {
                                                         sum=sum+a[j][1]+a[j][n];
                                                         }
                                                         my_printf("%d\n",sum);
                                                         }
                                                      
                                                     else
                                                     {for(j=1;j<=m;j++)
                     {
                                      for(k=1;k<=n;k++)
                     {
                                      my_scanf("%d",&a[j][k]);
                                      }
                                      }for(j=1;j<=m;j++)
                                                     {for(k=1;k<=n;k++)
                                                     sum=sum+a[j][k];}
                                                     my_printf("%d\n",sum);}
                                                       
                                                       
                                                       }
                                                 
                                                         
                                                    getchar();getchar();    } 
