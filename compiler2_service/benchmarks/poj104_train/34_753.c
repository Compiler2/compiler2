#include <header.h>

main_bench()
{
 int i,n;
 my_scanf("%d",&n);
 for(i=n;i!=1;)
 {
  if(n==1)
  {
 my_printf("End");
  break;
 }
  if(i%2==0)
  {
  my_printf("%d/2=%d\n",i,i/2);
  i=i/2;
  }
  else
  {
   my_printf("%d*3+1=%d\n",i,i*3+1);
   i=i*3+1;
   }
  }
 my_printf("End");
}

 