#include <header.h>


int main_bench()
{
int arr[100], n;
int i;
my_scanf("%d",&n);
for(i=0;i<n;++i)
my_scanf("%d",&arr[i]);
for(i=0;i<n/2;++i)
{
arr[i]^=arr[n-i-1];
arr[n-i-1]^=arr[i];
arr[i]^=arr[n-i-1];
}
for(i=0;i<n;++i)
{
my_printf("%d",arr[i]);
if(i!=n-1)
my_printf(" ");
}
return 0;
}
