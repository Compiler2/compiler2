#define NUM_ITER 31102

#include <header.h>

int main_bench()
{
int n,a[10000],b[10000],i;
double c[10000],m;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%d %d",&a[i],&b[i]);
c[i]=1.0*b[i]/a[i];
}
for(i=1;i<n;i++)
{
m=c[i]-c[0];
if(m>0.05) my_printf("better\n");
if(m+0.05<0) my_printf("worse\n");
if(m<=0.05&&m+0.05>=0) my_printf("same\n");
}
return 0;
}