#include <header.h>

int ispr(int a)
{
    int i,just=1;
    for(i=2;i*i<=a;i++)
    if(a%i==0)
    {
              just=0;
              break;
              }
    return just;
}
main_bench()
{
      int n,a;
      my_scanf("%d",&n);
      if(n<5)
      my_printf("empty\n");
      else
      for(a=5;a<=n;a++)
      if(ispr(a)&&ispr(a-2))
      my_printf("%d %d\n",a-2,a);
      }