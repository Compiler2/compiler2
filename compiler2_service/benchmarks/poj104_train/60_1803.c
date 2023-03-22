#define NUM_ITER 9557

#include <header.h>

main_bench()
{
int a,b,c,d,e,f;
my_scanf("%d",&a);
if(a<5)
 my_printf("empty");
for(b=3;b<=a-2;b=b+2)
  {
   for(c=2;c<=b;c++)
   {
    d=b%c;
     if (d==0) break;                
   }                     
    for(e=2;e<=b+2;e++)
    {
    f=(b+2)%e;
     if (f==0) break;    
    }  
   if(c==b)
   {if(e==(b+2))
   my_printf("%d %d\n",b,b+2);
  }}  
  }
