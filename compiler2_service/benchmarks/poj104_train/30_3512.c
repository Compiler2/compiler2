#define NUM_ITER 71829

#include <header.h>

int main_bench()
{
int a,b,c,m,n,i;
my_scanf("%d",&n);
for(i=1,m=0;i<=n;i++)
{
a=i%7;
b=i%10;
c=i/10;
if(a!=0&&b!=7&&c!=7)
m=m+i*i;
}
my_printf("%d",m);
return 0;
}