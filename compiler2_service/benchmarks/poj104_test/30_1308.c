#include <header.h>

int main_bench()
{
int i,j,k,m=0,n;
my_scanf("%d",&n);
for(i=1;i<=n;i++)
{
if((i/10)==7||(i%10==7)||(i%7==0))
continue;
else
m=m+i*i;
}
my_printf("%d",m);
}