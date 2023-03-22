#include <header.h>

main_bench()
{
      int su(int n);
      int m;
      my_scanf("%d",&m);
      int a,b;
      a=3,b=5;
      if(m<5)
      {my_printf("empty\n");}
      else 
      {
           do
           {
           if(su(a)&&su(b))
      {
           my_printf("%d %d\n",a,b);
      }
      a+=2;
      b+=2;
      }
          while(b<=m);
      }
}
      int su(int n)
      {
          int i;
          int p=1;
          for(i=2;i<n/2;i++)
          {
                            if(n%i==0)
                            {p=0;
                            break;}                    
          }
          return(p);
      } 