#define NUM_ITER 9656

#include <header.h>


main_bench()
{
int m,a,b,i,t;
my_scanf("%d",&m);
 for(a=2;a<=m/2;a++)
 {
  t=0;
  for(i=2;i<a-1;i++)
  {
   if(a%i==0)t=1;
  }
 if(t==0)
 {
 b=m-a;
 t=0;
for(i=2;i<b-1;i++)
  {
   if(b%i==0)t=1;
  }
if(b==1)t=1;
if(t==0)my_printf("%d %d\n",a,b);
 }
 }
}