#define NUM_ITER 308541

#include <header.h>


main_bench()
{  
      int a;
      my_scanf("%d",&a); 
      if(a==1)
      my_printf("End"); 
      else
      
      
      { for(;;)
     {if(a%2==0)
     {
               my_printf("%d/2=%d\n",a,a/2);
     a=a/2;
     }
     else 
     if(a==1) 
     {
              my_printf("End");
              break;
     }
     else 
     {
          my_printf("%d*3+1=%d\n",a,3*a+1);
     a=3*a+1;
     }
     }
     
     }
     
                         

      }
