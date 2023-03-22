#define NUM_ITER 25731

#include <header.h>

int main_bench()
{
int n,i;
double a,b,q[1000],w[1000];
my_scanf("%d",&n);
my_scanf("%lf%lf",&a,&b);
a=b/a;
for(i=0;i<n-1;i++)
{my_scanf("%lf%lf",&q[i],&w[i]);
q[i]=w[i]/q[i];}
for(i=0;i<n-1;i++)
{if(q[i]-a>0.05){my_printf("better\n");}
else if(a-q[i]>0.05){my_printf("worse\n");}
else my_printf("same\n");}
return 0;
}