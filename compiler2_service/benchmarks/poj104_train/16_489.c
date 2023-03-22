#define NUM_ITER 1401010

#include <header.h>

int main_bench()
{
    int n,a,c;
    my_scanf("%d",&n);
    c=0;
    if(n!=0)
    for(;n!=0;n=n/10)
    {
    a=n%10;
    my_printf("%d",a);
    
             }
    else 
     my_printf("0");
    return(0);
    
    
}