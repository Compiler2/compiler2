#include <header.h>

int main_bench()
{
char c[501];
int a,i,j,m,n;
gets(c);
n=strlen(c);
for(m=2;m<=n;m++)
{
for(i=0;i<=n-m;i++)
{
a=0;
for(j=i;j<m+i;j++)
{
if(c[j]!=c[m+i-j+i-1])
{a=1;break;}
}
if(a==0)
{
for(j=i;j<m+i;j++)
my_printf("%c",c[j]);
my_printf("\n");
}
}
}
return 0;
}
