#define NUM_ITER 45332

#include <header.h>

int main_bench()
{int n,i,j,t,a[100];
my_scanf("%d",&n);
for(i=0;i<n;i++)
my_scanf("%d",&a[i]);
for(j=n-1;j>0;j--)
if(a[j]>a[j-1])
{t=a[j];
a[j]=a[j-1];
a[j-1]=t;}
my_printf("%d\n",a[0]);
for(j=n-1;j>1;j--)
if(a[j]>a[j-1])
{t=a[j];
a[j]=a[j-1];
a[j-1]=t;}
my_printf("%d",a[1]);

}