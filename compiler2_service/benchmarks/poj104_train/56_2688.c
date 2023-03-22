#include <header.h>

int main_bench()
{
 int n;
my_scanf("%d",&n);
r(n);
} 

r(int m)
{ 
my_printf("%d",m%10);
m=m/10;
if(m!=0)
return r(m);
} 