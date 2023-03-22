#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d", &n);
    int i=1;
    int k;
    int sum=0;
    int x[10];
    if(n==0)
    my_printf("0");
    else
    {
    while(n!=0)
    {
               
               x[i]=n%10;
               n=n/10;
               i++;
    }
    i=i-1;

    for(k=1;k<=i;k++)
    {
                     my_printf("%d", x[k]);
    }
    }

    return 0;
}
