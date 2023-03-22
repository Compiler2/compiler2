#include <header.h>

int main_bench()
{
 int a,b,c,d,e,f,g,h;
 my_scanf("%d",&a);
 b=a%1000;
 c=(a-b)/1000;
 d=b%100;
 e=(b-d)/100;
 f=d%10;
 g=(d-f)/10;
 if(c==0)
  {
    if(e==0)
     {
       if(g==0)
        {
          if(f==0)
           my_printf("0");
          else
           my_printf("%d",f);
         }
       else
         {
         my_printf("%d%d",f,g);}
      }
     else
       {
        my_printf("%d%d%d",f,g,e);}
   }
 else                                       
 {
 my_printf("%d%d%d%d",f,g,e,c);}
}