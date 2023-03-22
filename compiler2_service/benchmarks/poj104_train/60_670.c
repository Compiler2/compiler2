#define NUM_ITER 30301

#include <header.h>

main_bench()
{
   int n;
   my_scanf ("%d",&n);
   int a;
   int b;
   
   int i;
   if (n<=4)
   my_printf ("empty");
   else 
   {
   for (a=3;a<=(n-2);a++)
      {   
         for (i=2;i<=a;i++)
             {
                b=a+2;           
                if (a%i==0)
                break ;
                else if (b%i==0)
                break ;
                                 
                           
             }  
           if (i==a)
           my_printf ("%d %d\n",a,b);   
    
      }     
      }
     getchar ();
     getchar ();
     
     
  
     
}