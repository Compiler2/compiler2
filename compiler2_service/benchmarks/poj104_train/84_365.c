#include <header.h>

int main_bench()
{
    int a[100];
    int i,j,n,t;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                     my_printf("\n");
                     my_scanf("%d",&a[i]);
    }
    for(j=0;j<2;j++)
    {
                      for(i=0;i<n-1-j;i++)
                      {
                                          if(a[i]>a[i+1])
                                          {
                                                         t=a[i];
                                                         a[i]=a[i+1];
                                                         a[i+1]=t;
                                          }
                      }
    }
                        my_printf("%d\n%d",a[n-1],a[n-2]);
    getchar();getchar();
}
