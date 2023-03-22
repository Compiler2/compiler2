#define NUM_ITER 26899

#include <header.h>

int main_bench()
{
int n;
my_scanf("%d",&n);
int i,a,b;
my_scanf("%d%d",&a,&b);
double c=(double)b/a; 
for (i=1; i<n; i++)
{
my_scanf("%d%d",&a,&b);
double d=(double)b/a; 
double t=d-c;
if (t>0.05) my_printf("better\n");
else if (t<-0.05) my_printf("worse\n");
else my_printf("same\n");
}
return 0;
}

