#include <header.h>

main_bench()
{
      int N,a;
      int odd(int x);
      int even(int x);
      my_scanf("%d",&N);
      while(N!=1)
      {
           
           if(N%2==1)
           {
                     a=N;
                     N=odd(N);
                     my_printf("%d*3+1=%d\n",a,N);                     
           }
           else
           {
                     a=N;
                     N=even(N);
                     my_printf("%d/2=%d\n",a,N);
           }
      }
      my_printf("End\n");
  
            }
      
int odd(int x)
{
    int z;
    z=3*x+1;
    return z;
    }
    
int even(int x)
{
    int y;
    y=x/2;
    return y;
    }
