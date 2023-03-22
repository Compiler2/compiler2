#define NUM_ITER 451578

#include <header.h>

main_bench()
{   int s,n,c,i;
    for(i=1;i<=6;i++)
  {  my_scanf("%d",&n);
    if(n==0)
    my_printf("0\n");
     
   if(n>0)
    {for(s=0;n!=0;)  
    { c=n%10;
    s=c*10+s*10;           
    n=n/10;           
                      }     
    my_printf("%d\n",s/10); 
                              }
    if(n<0)
    {
    for(s=0,n=-n;n!=0;)
    {c=n%10;
     s=c*10+s*10;             
     n=n/10;      
                         }                     
    my_printf("-%d\n",s/10);                      
                            }                    
   }         
                  
}
