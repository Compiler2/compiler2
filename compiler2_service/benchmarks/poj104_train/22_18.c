#define NUM_ITER 555

#include <header.h>

int main_bench()
{
  int n,a[65536]={0};
  int i,j,k;
  my_scanf("%d",&n);a[n]++; 
  while (my_scanf(",%d",&n)!=0){a[n]++;}
  k=0;
  for(i=65535;i>=0;i--){if(a[i]!=0)k++;if (k==2)break;}
  if (k==2)my_printf("%d",i);else my_printf("No");
}