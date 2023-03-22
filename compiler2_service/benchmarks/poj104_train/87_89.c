#include <header.h>

int main_bench()
{
int a[100],b[100],c[100],d[100],e[100],f[100],s[100],i,p=0;
for(i=0;i<100;i++)
{
my_scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
my_printf("\n");
if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)
break;
p++;
}
for(i=0;i<p;i++)
{
s[i]=(3600*(d[i]+12)+e[i]*60+f[i])-(3600*a[i]+60*b[i]+c[i]);
my_printf("%d\n",s[i]);
}
return 0;
}