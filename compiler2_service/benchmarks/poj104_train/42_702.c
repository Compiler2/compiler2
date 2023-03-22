#define NUM_ITER 37503

#include <header.h>

int main_bench()
{
    int m,n,i,k;
    int a[100000];
    my_scanf("%d",&n);
    for(int i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    my_scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
       if(a[i]!=m)
      {
       my_printf("%d",a[i]);
       k=i;
       break;
      }
    }
    for(int i=k+1;i<n;i++)
    {
     if(a[i]!=m)
     my_printf(" %d",a[i]);
     getchar();
     getchar();
    }
}
