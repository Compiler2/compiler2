#include <header.h>

int main_bench()
{
 int n,a,b,c;
 a=3;
 b=5;
 c=7;
  my_scanf("%d",&n);
  if (n%3==0){
    my_printf("%d",a);
    if(n%5==0){
     my_printf(" %d",b);
     if (n%7==0)
      my_printf(" %d",c);
 }
   else if(n%7==0)
     my_printf(" %d",c);
  }
  else if(n%5==0){
     my_printf("%d",b);
     if (n%7==0)
      my_printf(" %d",c);
   }
  else if(n%7==0)
    my_printf("%d",c);
  else
  my_printf("n\n"); 
  
   return 0;
}  
