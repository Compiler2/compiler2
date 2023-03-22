#define NUM_ITER 1263295

#include <header.h>

int main_bench()
{
     int a;
     my_scanf("%d",&a);
     int b;
     if(a==0) my_printf("0\n");
     else
     {
         while(a!=0)
         {
                b=a%10;
                a=a/10;
                my_printf("%d",b);
         }
         my_printf("\n");
     }
     getchar();
     getchar();
     getchar();
}
                
     
