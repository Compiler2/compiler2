#include <header.h>

double cao(int n)
{
int i;
double tmp,tt=1,ttt=2,s=0,ss=0;
for(i=1;i<=n;i++)
{ss=ttt/tt;tmp=tt;tt=ttt,ttt=ttt+tmp;
s=s+ss;}
return s;
}
int main_bench()
{
int n,i,a[99];
double ccc;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{my_scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ccc=cao(a[i]);
my_printf("%.3lf\n",ccc);
}
return 0;
}