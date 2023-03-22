#include <header.h>

int main_bench()
{
    int i,n,m,a[100],b[100],t,j;
    my_scanf("%d%d", &n, &m);
    for(i=1;i<=n;i++){my_scanf("%d", &a[i]);}
    for(i=1;i<=m;i++){my_scanf("%d", &b[i]);}
    for(i=1;i<=n;i++){
                      for(j=2;j<=n;j++){
                                        if(a[j]<a[j-1]){
                                                       t=a[j];
                                                       a[j]=a[j-1];
                                                       a[j-1]=t;
                                                       }
                                        }
                      }
    for(i=1;i<=m;i++){
                      for(j=2;j<=m;j++){
                                        if(b[j]<b[j-1]){
                                                       t=b[j];
                                                       b[j]=b[j-1];
                                                       b[j-1]=t;
                                                       }
                                        }
                      }
    for(i=1;i<=n;i++){my_printf("%d ", a[i]);}
    for(i=1;i<=m;i++){my_printf("%d", b[i]);
                      if(i<m){my_printf(" ");}}
    return 0;
    }
 
