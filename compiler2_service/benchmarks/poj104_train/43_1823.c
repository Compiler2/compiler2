#define NUM_ITER 25969

#include <header.h>

int main_bench()
{
   int m,a,b,i;
   my_scanf("%d",&m);
   for(a=2;a<=(m/2);a++)
   {
       b=m-a;
       for(i=2;i<a;i++)
       {if(a%i!=0)
       continue;
       else
       goto a;}
       for(i=2;i<b;i++)
       {
           if(b%i!=0)
           continue;
           else
           goto a;
       }
    my_printf("%d %d\n",a,b);
    a:continue;
   }
   return 0;
}