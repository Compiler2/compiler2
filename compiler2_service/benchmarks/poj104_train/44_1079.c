#define NUM_ITER 343245

#include <header.h>



void reverse( int a)
{
    int i,l,b;
    i=0;
    if (a==0)   my_printf("0");
    while ((a%10)==0)
        {a=a/10;}
    while (a!=0)
    {
                if (a>0)
                {
                         b=a%10;
                         my_printf("%d",b);
                           a=a/10;

                 }
                else if (a<0)
                 {
                        b=a%10;
                        if (i==0)
                        my_printf("%d",b);
                        else
                              {
                                  b=-b;
                               my_printf("%d",b);    
                               } 
                         a=a/10;
                         i++;
                  }
                

      }


    }

int main_bench()
{
    int m,a;
    int i=1;
    while (i<=6)
    {my_scanf("%d",&a);
    reverse( a);
    my_printf("\n");
    i++;}

    getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
}
 