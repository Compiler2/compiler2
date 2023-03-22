#include <header.h>

int main_bench()
{
int i,n,a[100],max=0,min=0;
my_scanf("%d",&n);
for(i=0;i<n;i++)
my_scanf("%d",&a[i]);
for(i=0;i<n;i++)
if (a[i]>max) {min=max;max=a[i];}
else if(a[i]>min) min=a[i];
my_printf("%d\n%d",max,min);
}