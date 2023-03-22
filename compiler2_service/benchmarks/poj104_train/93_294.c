#define NUM_ITER 1862662

#include <header.h>

int main_bench(){
    int a,b,c,d;
    my_scanf("%d",&a);
    b=a/3;
    c=a/5;
    d=a/7;
    if((a==3*b)&(a==5*c)&(a==7*d)) my_printf("3 5 7");
    else
    {if((a==3*b)&(a==5*c)) my_printf("3 5");
     else
     {if((a==3*b)&(a==7*d)) my_printf("3 7");
      else
      {if((a==5*c)&(a==7*d)) my_printf("5 7");
       else
       {if((a==3*b)) my_printf("3");
        else
        {if((a==5*c)) my_printf("5");
         else
         {if((a==7*d)) my_printf("7");
          else my_printf("n");
         }
        }
       }
      }
     }
    }
return 0;
}   