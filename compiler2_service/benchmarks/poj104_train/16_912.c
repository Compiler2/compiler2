#include <header.h>

main_bench()
{
int n,i=0,j;
int a[5];
my_scanf("%d",&n);
for(;n>0;) 
{
a[i]=n%10;
i++;
n=n/10;
}
for(j=0;j<i;j++)
my_printf("%d",a[j]);
getchar();
getchar();
}
