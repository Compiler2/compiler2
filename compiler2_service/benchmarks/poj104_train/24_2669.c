#include <header.h>

main_bench()
{
int n,l,s,ln=0,sn=30,i=0;
char a[200][30];
my_scanf("%d",&n);
while(n--)
{
my_scanf("%s",a[i]);
if(ln<strlen(a[i]))
{
ln=strlen(a[i]);
l=i;
}
if(sn>strlen(a[i]))
{
sn=strlen(a[i]);
s=i;
}
i++;
}
my_printf("%s\n%s",a[l],a[s]);
}
