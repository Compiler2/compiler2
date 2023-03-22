#define NUM_ITER 896294

#include <header.h>

int main_bench()
{
    int n;
    int a,b,c;
  
    a=3;
    b=5;
    c=7;
    my_scanf("%d",&n);
    if (n%a==0&&n%b==0&&n%c==0)
    my_printf("%d %d %d",a,b,c);
    if (n%a==0&&n%b==0&&n%c!=0)
    my_printf("%d %d",a,b);
    if (n%b==0&&n%c==0&&n%a!=0)
    my_printf("%d %d",b,c);
    if (n%a==0&&n%c==0&&n%b!=0)
    my_printf("%d %d",a,c);
    if(n%a==0&&n%b!=0&&n%c!=0)
     my_printf("%d",a);
    if(n%a!=0&&n%b==0&&n%c!=0)
     my_printf("%d",b);
    if(n%a!=0&&n%b!=0&&n%c==0)
     my_printf("%d",c);
     if(n%a!=0&&n%b!=0&&n%c!=0)
     my_printf("n");
  
     return 0;
}
    
