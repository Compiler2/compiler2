#include <header.h>


int main_bench()
{
int n,m,i=5;
my_scanf("%d",&n);
if (!n) 
{
my_printf("%d",n);
return 0;
}
while (n)
{
my_printf("%d",n%10);
n=n/10;
}
return 0;
}
