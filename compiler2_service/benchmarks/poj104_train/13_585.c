#define NUM_ITER 7875

#include <header.h>

int main_bench()
{
int a[20000],n,i,c,j,k=0,p;
my_scanf ("%d",&n);
for (i=0;i<n;i++)
{
my_scanf ("%d",&c);
p=1;
for (j=0;j<k;j++)
 if (a[j]==c) p=0;
if (p) {a[k]=c;k++;} 
}
for (i=0;i<k-1;i++)
my_printf ("%d ",a[i]);
my_printf ("%d",a[i]);
 }