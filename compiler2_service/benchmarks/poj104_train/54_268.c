#define NUM_ITER 277970

#include <header.h>

int main_bench()
{
 int m,k,n,i,p,q=1;
 my_scanf("%d %d",&n,&k);
 p=n;
 for(i=1;i<=n;i++)
 { 
  q=q*n;
 }
 m=q-p*k+k;
 my_printf("%d",m);
}