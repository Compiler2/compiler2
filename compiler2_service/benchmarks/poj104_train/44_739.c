#include <header.h>

int main_bench()
{
   int n,i;
   int reverse(int num);
   for (i=1;i<=6;i++)
   {
     my_scanf("%d",&n);
     my_printf("%d\n",reverse(n));
   }   
   return(0);   
}

int reverse(int num)
{
  int s,num1;
  if (num>0) num1=num; else num1=-num;
  s=0;
  while (num1>0)
  {
    s=s*10+num1%10;
    num1=num1/10;
  }
  if (num<0) s=-s;
  return(s);
}