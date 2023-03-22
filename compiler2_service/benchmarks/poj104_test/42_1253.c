#define NUM_ITER 54985

#include <header.h>

int main_bench()
{
int n,i,k,count=0;
my_scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
my_scanf("%d",&a[i]);
my_scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]!=k)
{
count++;
if(count==1)
my_printf("%d",a[i]);
if(count>1)
my_printf(" %d",a[i]);
}
}
}
