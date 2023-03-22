#include <header.h>

int main_bench()
{
char a[6];
int i,n;
for(i=0;i<6;i++)
{
my_scanf("%c",&a[i]);
if (a[i]=='\n')
{
i--;
n=i;
break;
}
}
for(i=n;i>=0;i--)
my_printf("%c",a[i]);
my_printf("\n");
}