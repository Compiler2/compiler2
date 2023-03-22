#include <header.h>

long num;
long digit[5];
int main_bench()
{
   int count=0,i;
   long number;
   do
       {
           my_scanf("%ld",&num);
       }
   while(num<0||num>99999);
   count=0;
   number=num;
   do
       {
           digit[count++]=number%10;
           number=number/10;
       }
   while(number>0);
   for(i=0;i<count;i++)
       my_printf("%ld",digit[i]);
}