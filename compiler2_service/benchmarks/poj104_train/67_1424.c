#define NUM_ITER 24747

#include <header.h>

int main_bench()
{
int n,i;
double tm,tmt,c,a[100];
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%lf %lf",&tm,&tmt);
a[i]=tmt/tm;
}
for(i=1;i<n;i++)
{
c=a[i]-a[0];
if(c>0.05){my_printf("better\n");}
if(c<-0.05){my_printf("worse\n");}
if(c>=-0.05&&c<=0.05){my_printf("same\n");}
}
return 0;
}