#define NUM_ITER 2289

#include <header.h>

int main_bench()
{
int m,n;
my_scanf("%d",&m);
for (int i=0;i<m;i++)
{
my_scanf("%d",&n);
float s=0;
int a[n+2];
a[1]=1;
a[0]=1;
for (int j=2;j<n+2;j++)
a[j]=a[j-1]+a[j-2];
for (int j=1;j<=n;j++)
{
s+=1.0*a[j+1]/a[j];
}
my_printf("%.3f\n",s);
}
}