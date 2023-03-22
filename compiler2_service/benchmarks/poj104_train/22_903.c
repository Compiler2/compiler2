#define NUM_ITER 20163

#include <header.h>

int main_bench()
{
   int m,i,max,second=0;
   my_scanf("%d",&m);
   max=m;
   i=0;
   while(i<300)
   {
                      my_scanf(",%d",&m);
                      if(m>max){ 
                      second=max;
                      max=m;}
                      else if(m<max&&m>second) 
                      second=m;
					  i=i+1;
   }
   if(second==0)
   my_printf("No");
   else
   my_printf("%d\n",second);
   return 0;
}
