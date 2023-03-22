#define NUM_ITER 171237

#include <header.h>

int wer(int a)
{
      int n,i;
      n=a%2;
     if(n==1)
          i=3*a+1;
     else
          i=a/2;
     return i;
}
int main_bench()
{
     int a;
     my_scanf("%d",&a);
if(a==1)
my_printf("End");
else
{
     for(;;)
     {
     if(a%2==1)
     {
                    my_printf("%d*3+1=%d\n",a,wer(a));
                     a=wer(a);
     }
     else
            {
                    my_printf("%d/2=%d\n",a,wer(a));
                    a=wer(a);
            }
      if(a==1)
      {my_printf("End");
      break;
      }}}
}
