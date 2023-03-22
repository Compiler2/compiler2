#define NUM_ITER 54206

#include <header.h>

int main_bench()
{
 int a[1000],b,c,d,i,n,j,k;
 my_scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)
 my_scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(a[i]+a[j]==k)
 {
  my_printf("yes\n");
 goto loop;
  }
 my_printf("no\n");
loop:
 b=0;
}