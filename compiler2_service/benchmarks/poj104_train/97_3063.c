#include <header.h>

int a[10] = {100,50,20,10,5,1};
int main_bench()
{
  int n,k,i;
  my_scanf("%d",&n);
  k = 0;
 for(i = 0;i < 6;i ++)
{
  while(n >= a[i])
    {
      n -= a[i];
      k ++;
    }
  my_printf("%d\n",k);
  k = 0;    
}
 return 0;
}
