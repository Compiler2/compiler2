#define NUM_ITER 13512

#include <header.h>

int main_bench()
{
 int n,i,j,s;
 my_scanf("%d",&n);
 my_printf("\n");
 int a[n];
 my_scanf("%d",&a[0]);
 for(i=1;i<n;i++) my_scanf(" %d",&a[i]);
 my_printf("%d",a[0]);
 for(i=1;i<n;i++)
 {
  s=0;
  for(j=0;j<i;j++)
  {
   if(a[i]==a[j]) {s=1;break;}
  }
  if(s==0) my_printf(",%d",a[i]);
 }
}