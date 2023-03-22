#define NUM_ITER 6126

#include <header.h>

int main_bench()
{
    int a[100000];
    int n,i,j,s;
    s=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    my_scanf("%d",&a[i]);
   
    for(i=1;i<=n;i++)
    {s=0;if(i==1){my_printf("%d",a[1]);}else
                         {for(j=1;j<i;j++)
                     {
                                     if(a[j]==a[i])
                                     s=s+1;
                                     }
                                     if(s==0)
                                     my_printf(" %d",a[i]);}
                                     
                                     }
                                     getchar();
                                     getchar();
                                     getchar();
                                     }
                                  