#define NUM_ITER 288219

#include <header.h>

int main_bench()
{
    int a;
    my_scanf("%d",&a);
    while (a!=1)
    {
          if(a%2!=0)
    {
              my_printf("%d*3+1=%d\n",a,3*a+1);
              a=3*a+1;
    }
    else
    {
              my_printf("%d/2=%d\n",a,a/2);
              a=a/2;
    }
}
my_printf("End");
getchar();
getchar();
getchar();
return 0;
}