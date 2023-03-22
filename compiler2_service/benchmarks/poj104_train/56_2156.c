#include <header.h>



int main_bench()
{
    int n,a=0,b=0,c=0,t;
    my_scanf("%d",&n);
    for(;n>0;)
    {
        t=n%10   ;
        my_printf("%d",t);
        n/=10;


     }


    return 0;
}
