#define NUM_ITER 49794

#include <header.h>

int main_bench()
{
int n,k,m;
my_scanf("%d",&n);
int a[n];
m=n;
for (int i=0;i<n;i++)
my_scanf("%d",&a[i]);
my_scanf("%d",&k);
for (int i=0;i<n;i++)
if (a[i]==k) {for (int j=i;j<n-1;j++) a[j]=a[j+1];i--;n--;}
for (int i=0;i<n-1;i++)
my_printf("%d ",a[i]);
my_printf("%d",a[n-1]);
}