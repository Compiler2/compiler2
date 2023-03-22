#include <header.h>

int main_bench()
{
  int num,i,num2=0,b;
  my_scanf("%d",&num);
  for(i=1;i<=6;i++)
   {
    b=num%10;
    num=num/10;
    if(b!=0) num2=num2*10+b;
      }
my_printf("%d",num2);
}
