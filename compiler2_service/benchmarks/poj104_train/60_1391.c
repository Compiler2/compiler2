#define NUM_ITER 15484

#include <header.h>

int isPrime(int a)
{
    int i;
    for(i=2;i<a;i++)
    if(a%i==0)return 0;
    return 1;
}
int main_bench()
{
   int n;
   my_scanf("%d",&n);
   int i,sum=0;
   for(i=3;i+2<=n;i++)
   if(isPrime(i)&&isPrime(i+2))
   {my_printf("%d %d\n",i,i+2);sum++;}
   if(sum==0)my_printf("empty");
   return 0;
}
    