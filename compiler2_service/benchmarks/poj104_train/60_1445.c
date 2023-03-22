#include <header.h>

main_bench()
{
      int n,a,i,k;
      
      my_scanf("%d",&n);
      if(n<=4)
      my_printf("empty");
      else
      {
          n=n-2;
      for(a=3;a<=n;a=a+2)
          {
          
          for(k=2;k<=a;k=k+1)
          if(a%k==0)break;
          if(k==a)
          {
          
          for(k=2;k<=(a+2);k=k+1)
          if((a+2)%k==0)break;
          if(k==(a+2))
          my_printf("%d %d\n",a,(a+2));
          }
          
          }
          }
      
      
      }
