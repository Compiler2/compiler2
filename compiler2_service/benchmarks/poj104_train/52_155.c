#define NUM_ITER 56242

#include <header.h>

int main_bench()
{
  int n,m,i,*num;
  my_scanf("%d%d",&n,&m);
  num=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++) 
  {
  my_scanf("%d",num+i);
  }
   my_printf("%d",*(num+n-m));
  for(i=n-m+1;i<n;i++)
  {
    my_printf(" %d",*(num+i));
  }
  for(i=0;i<n-m;i++)
  {
   my_printf(" %d",*(num+i));
  }
  free(num);

	return 0;
}