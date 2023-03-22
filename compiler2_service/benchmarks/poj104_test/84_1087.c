#include <header.h>

int main_bench()
{
    int n,i,a,b,c;
    i=1;
    my_scanf("%d",&n);
    b=0;
    c=0; 
    while(i<=n)
    {
               my_scanf("%d",&a);
               if(a>b)
               {
                      if(c<b)
                      {
                             c=b; 
                      } 
                      b=a; 
               } 
               else
               {
                   if(c<a)
                   {
                          c=a; 
                   } 
               } 
               i++; 
                
    }
    my_printf("%d\n",b);
    my_printf("%d\n",c); 
    return 0; 

} 