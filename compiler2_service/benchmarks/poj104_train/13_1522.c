#include <header.h>

int main_bench()
{int i,j,a[20000],n;
my_scanf("%d",&n);
for(i=0;i<n;i++)
my_scanf("%d",&a[i]);
my_printf("%d",a[0]);
for(i=1;i<n;i++)
{for(j=0;j<i;)
{if(a[i]==a[j]) j=i+1;
else j++;
if(j==i) my_printf(" %d",a[i]);}}}