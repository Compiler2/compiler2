#define NUM_ITER 378991

#include <header.h>

int main_bench()
{
   int a;
   my_scanf("%d",&a);
   if(a==1)
      my_printf("End");
      else
      {
        do{
        if(a%2==0)
          {my_printf("%d",a);
           a=a/2;
           my_printf("/2=%d\n",a);
          }
        else 
          {
           my_printf("%d*3+1=",a);
           a=3*a+1;
           my_printf("%d\n",a);
          }
          }
        while(a!=1);
        my_printf("End");
      }
   getchar();
   getchar(); 
   return 0;
}