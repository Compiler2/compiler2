#define NUM_ITER 1199768

#include <header.h>

int main_bench()
{
     int a,b,c,d,e,f,g,h,i,j=0;
  my_scanf("%d%d",&c,&d);
  i=0;
  for(a=c;a<=d;a++)
  {
   b=a;
   e=0;
             while(b!=0)
    {
     e=e*10+b%10;
     b/=10;
    }
    if(e==a)
    {
     h=0;
     for(f=2;f<e;f++)
     {
      g=e%f;
      if(g==0)
      {
       h=1;
       break;
      }
     }
     if(h==0)
     {
         my_printf("%d",e);
         i++;
         j=1;
     }
    }
    if(j==1)
   break;
  }
  for(a=a+1;a<=d;a++)
  {
      b=a;
      e=0;
             while(b!=0)
    {
     e=e*10+b%10;
     b/=10;
    }
    if(e==a)
    {
     h=0;
     for(f=2;f<e;f++)
     {
      g=e%f;
      if(g==0)
      {
       h=1;
       break;
      }
     }
     if(h==0)
     {
         my_printf(",%d",e);
         i++;
     }
    }

  }
    if(i==0)
        my_printf("no");
  return 0;
}