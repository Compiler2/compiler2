#include <header.h>

main_bench()
{
      int n,a,b,i,k,c,d;
      d=0;
      my_scanf("%d",&n);
      if (n>4)
      {
              d=d+1;
              my_printf("3 5\n");
      }
      
      for (a=2;a<=n-2;a++)
      {
          b=a/2;
          i=2;
          c=0;
          while(i<=b)
          {
               k=a%i;
               if (k==0)
               {
                        c++;
               }
               i++;
          }
          if (c==0)
          {
                   a=a+2; 
                   b=a/2;
                   i=2;
                   c=0;
                   while(i<=b)
                     {
                        k=a%i;
                      if (k==0)
                        {
                        c++;
                        }
                      i++;
                     }
                     if (c==0)
                     {
                              d=d+1;
                              my_printf("%d %d\n",a-2,a);
                     }
                 
          }
      }
      if (d==0)
      {
               my_printf("empty");
      }
     getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
     }
      
          
      
