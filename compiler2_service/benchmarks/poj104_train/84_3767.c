#define NUM_ITER 52790

#include <header.h>

main_bench()
{
int n,i,max1=0,max2=0,a[999];
my_scanf("%d",&n);
for(i=1;i<=n;i++)
my_scanf("%d",&a[i]);
for(i=1;i<=n;i++) 
{
if(a[i]>max1&&a[i]>max2) {max2=max1;max1=a[i];}
else if(a[i]<max1&&a[i]>max2) {max2=a[i];}
else if(a[i]<max1&&a[i]<max2) {}
}
my_printf("%d\n%d",max1,max2);
}