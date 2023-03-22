#include <header.h>

main_bench()
{
      int n,a;
      my_scanf("%d",&n);
       while (n-1>0)
      {  if (n%2==0)
      { n=n/2;
          a=2*n;
          my_printf("%d/2=%d\n",a,n); 
      }   
      else
      {  n=3*n+1;
         a=(n-1)/3;
         my_printf("%d*3+1=%d\n",a,n); 
      }   
      
      }   my_printf("End");  
      
}
