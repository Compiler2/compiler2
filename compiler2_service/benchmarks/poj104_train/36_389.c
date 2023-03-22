#include <header.h>

int main_bench()
{
char c[10],b[10];
int i,j,n,k,m;
my_scanf("%s %s",c,b);
n=strlen(c);
m=strlen(b);
if(m==n)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(c[i]!=' '&&b[j]!=' ')
{
if(c[i]==b[j])
c[i]=b[j]=' ';
}
}
}
for(i=0;i<n;i++)
{
if(c[i]!=' '||b[i]!=' ')
{
my_printf("NO");
break;
}
}
if(i==n)
my_printf("YES");
}
else
my_printf("NO");
}