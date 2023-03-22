#include <header.h>

main_bench()
{
int n;
my_scanf("%d",&n);
while (n!=1)
{
if (n%2==1)
my_printf("%d*3+1=%d\n",(n-1)/3,n=n*3+1);
else 
my_printf("%d/2=%d\n",n*2,n=n/2);
}
my_printf("End");
}
