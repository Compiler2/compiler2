#define NUM_ITER 389988

#include <header.h>

main_bench()
{
      int a,b;
      my_scanf("%d",&a);
      if (a==1)
      {
              my_printf("End\n");
      }       
      else
      {
         while (a!=1) 
           {    
               if (a%2==1)
             {
              b=3*a+1;
              my_printf("%d*3+1=%d\n",a,b);
             }
              else 
             {
              b=a/2;
              my_printf("%d/2=%d\n",a,b);
             }
        a=b;
           } 
          my_printf("End\n");
     }   
      getchar(); 
      getchar();      
}