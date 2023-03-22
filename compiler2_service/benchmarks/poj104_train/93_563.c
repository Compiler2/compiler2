#include <header.h>

int main_bench()
{
    int a;
    double b;
    char d;
    my_scanf("%d",&a);
    if(a%3==0&&a%5==0&&a%7==0)
    {
      my_printf("3 5 7\n",b);
      }
    else if(a%3==0&&a%5==0)
    {
      my_printf("3 5\n",b);
      }
    else if(a%3==0&&a%7==0)
    {
         my_printf("3 7\n",b);
         }
    else if(a%5==0&&a%7==0)
    {
         my_printf("5 7\n",b);
         }
    else if(a%3==0)
    {
         my_printf("3\n",b);
         }
    else if(a%5==0)
    {
         my_printf("5\n",b);
         }
    else if(a%7==0)
    {
         my_printf("7\n",b);
         }
    else
    {
        my_printf("n",d);
        }
    return 0;
}