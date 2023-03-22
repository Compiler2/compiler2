#include <header.h>

int main_bench()
{
int n,i,l,k,j;
l=0;
my_scanf("%d\n",&n);
long int a[100001];
for(i=0;i<n;i++)
my_scanf("%d",&a[i]);
my_scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
{for(j=i;j<n;j++)
a[j]=a[j+1];
l+=1;
i--;}
}
n-=l+1;
for(i=0;i<n;i++)
my_printf("%d ",a[i]);
                  my_printf("%d",a[n]);
}