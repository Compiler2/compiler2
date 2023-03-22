#define NUM_ITER 16850

#include <header.h>

int main_bench()
{
    int N,i,j,t=0;
    my_scanf("%d",&N);
    int a[500],c[500]={0},m=0;
    for(i=0;i<N;i++)
    {
                    my_scanf("%d",&a[i]);
                    if(a[i]%2!=0)
                    {
                                 c[m]=a[i];
                                 m++;
                    }
    }
    for(i=0;i<m-1;i++)
    {
                      for(j=0;j<m-1-i;j++)
                      {
                                          if(c[j]>c[j+1])
                                          {
                                                         t=c[j];
                                                         c[j]=c[j+1];
                                                         c[j+1]=t;
                                          }
                      }
    }
    my_printf("%d",c[0]);
    for(i=1;i<m;i++)
    my_printf(",%d",c[i]);
    return 0;
} 