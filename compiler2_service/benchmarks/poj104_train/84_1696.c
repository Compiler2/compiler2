#define NUM_ITER 62420

#include <header.h>

main_bench()
{
  int n,a,b,i=0,c;
  my_scanf("%d",&n);
  my_scanf("%d%d",&a,&b);
  if(a<b)
  a=a+b,b=a-b,a=a-b;
  while(i<n-2)
  {
    my_scanf("%d",&c);
    if(c>=a) b=a,a=c;
    else 
    {
    if(c>b) b=c;
     }
    i++;
   }
   my_printf("%d\n",a);
   my_printf("%d\n",b);
}    
    

