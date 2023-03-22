#define NUM_ITER 427682

#include <header.h>


int reverse(int a)
{
  int c=0;
  while(a)
  {
       c=c*10+a%10;
	   a=a/10;
 }
  return c;
}

main_bench()
{
  int a,i;
  for(i=0;i<6;i++)
  {
	 my_scanf("%d",&a);
	 my_printf("%d\n",reverse(a));
  }
  
}