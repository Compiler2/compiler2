#include <header.h>

main_bench()
{
int n,i,s=0;
my_scanf("%d",&n);
for(i=1;i<=n;i++)
if(i%7!=0&&i%10!=7&&i/10!=7)
s+=i*i;
my_printf("%d",s);
}