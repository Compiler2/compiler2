#define NUM_ITER 8221

#include <header.h>

int main_bench()
{
    int n,i,j,t=0;
    int a[20000];
    my_scanf("%d",&n);
    my_scanf("%d",&a[1]);
    my_printf("%d",a[1]);
    for(i=2;i<=n;i++)
    {
    my_scanf("%d",&a[i]);
    for(j=1;j<i;j++)
    {
    t=0;
    if(a[i]==a[j]){
    t=1;
    break;
    }
    }
    if(t==0)
    my_printf(" %d",a[i]);
    }
      return 0;
}
