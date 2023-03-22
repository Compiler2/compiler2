#define NUM_ITER 66703

#include <header.h>

int main_bench()
{
 int n,i=3,a,b,x;
 my_scanf("%d%d%d",&n,&a,&b);
   
 
 while(i<=n)
 {
   my_scanf("%d",&x);
   
   if((a<x)&&(x<b))
   {
	   a=x;
   }
   else if(x>b)b=x;
   
   
   i++;
 
 }
 if(a<b)
 my_printf("%d\n%d",b,a);
 else my_printf("%d\n%d",a,b);
 return 0;
}