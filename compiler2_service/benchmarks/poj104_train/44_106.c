#define NUM_ITER 418862

#include <header.h>

int main_bench()
{
   int reverse(int num);
   int i,n,p;
   for (i=0;i<6;i++)
   {
       my_scanf("%d",&n);
       p=reverse(n);
       my_printf("%d\n",p);
   }
   getchar();
   getchar();
}
   int reverse(int num)
   {
       int d,r=0;
       while (num!=0)
       {
       d=num%10;
       r=r*10+d;
       num=num/10;
       }
       return(r);
   }
   
   
   










