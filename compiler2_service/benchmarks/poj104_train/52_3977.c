#define NUM_ITER 52904

#include <header.h>

int main_bench()
{
 int i,a[10000],n,m;
 my_scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
  my_scanf("%d",&a[i]);
 for(i=n-m;i<2*n-m-1;i++)
  my_printf("%d ",*(a+i%n));
 my_printf("%d",*(a+n-m-1)); 
 getchar();
 getchar();
 return 0;    
}
