#include <header.h>

int main_bench()
{
int n,i;char a[6];
gets(a);
n=strlen(a);
for(i=n-1;i>=0;i--)
{my_printf("%c",a[i]);}
}