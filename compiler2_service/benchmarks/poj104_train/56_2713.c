#include <header.h>

int main_bench()
{
 int n;
 int r( int m );
my_scanf("%d",&n);
r(n);
} 

r( int m )
{ my_printf("%d",m%10);
m =m/10;
if( m!=0)
return r(m);
} 
