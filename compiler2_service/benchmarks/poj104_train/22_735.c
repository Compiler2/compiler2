#include <header.h>

int main_bench()
{
int m1,m2,n;
char c;
m1=m2=0;
do
{
my_scanf("%d%c",&n,&c);
if (n>m1)
{
m2=m1;
m1=n;
}
else if((n>m2)&&(n!=m1))
m2=n;
}
while(c==',');
if((m2!=m1)&&(m2!=0))
my_printf("%d",m2);
else
my_printf("No");

return 0;
}
