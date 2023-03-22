#define NUM_ITER 363949

#include <header.h>


int oddoreven(int a);
main_bench()
{
      int a,b;
      my_scanf("%d",&a);
      for(a;;)
      {
           if(oddoreven(a)==1)
           {   b=a/2;
               if(b==1)
               {  my_printf("2/2=1\n");
                  my_printf("End");
                  break;
               }
               else
               {  my_printf("%d/2=%d\n",a,b);
                  a=b;
               }
           }
           else
           { if(a==1)
             {  my_printf("End");
                break;
             }
             else   
             {  b=3*a+1;
                my_printf("%d*3+1=%d\n",a,b);
                a=b;
             } 
           }
                 
      }
     
}
int oddoreven(int a)
{
    if(a%2==0)
      return(1);
    else
      return(0);
} 
