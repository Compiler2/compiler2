#define NUM_ITER 1979246

#include <header.h>

int main_bench()
{
    int n,k=0;
    my_scanf("%d",&n);
    if(n%3==0)
    {
         my_printf("3");
         k++;
    }
    if(n%5==0)
    {
         if(k==0)
         {
                 my_printf("5");
                 k++;
         }
         else
         {my_printf(" 5");k++;}
    }
    if(n%7==0)
    {
         if(k==0)
         {
                 my_printf("7");
                 k++;
         }
         else
         {my_printf(" 7");k++;}
    }
    if(k==0)
    my_printf("n");
    return 0;
}
