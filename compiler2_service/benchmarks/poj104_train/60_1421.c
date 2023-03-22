#define NUM_ITER 16092

#include <header.h>

int main_bench()
{
    int n,a,b,c,d;
    my_scanf("%d",&n);
    if(n>=5)
    {
       for(a=3;a<=n-2;a+=2)
       {
          c=2;
          while(a%c!=0)
          {
             c=c+1;
          }
          if(c>=a)
          {
             d=2;
             b=a+2;
             while(b%d!=0)
             {
                d=d+1;
             }
             if(d>=b)
                my_printf("%d %d\n",a,b);
          } 
       }    
    }
    else
     my_printf("empty"); 
}
