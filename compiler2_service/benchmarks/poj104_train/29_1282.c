#define NUM_ITER 47866

#include <header.h>

int main_bench()
{
int m,n,i;
int a[100],b[100];
double s[100];
my_scanf("%d",&m);

a[1]=2;
b[1]=1;
s[1]=2.0;
for(i=2;i<100;i++)
{
a[i]=a[i-1]+b[i-1];
b[i]=a[i-1];
s[i]=(a[i]+0.0)/b[i]+s[i-1];
}
for(i=1;i<=m;i++)
{
  my_scanf("%d",&n);
  my_printf("%.3lf\n",s[n]);
}
return 0;
}