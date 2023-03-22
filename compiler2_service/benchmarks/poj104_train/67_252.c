#define NUM_ITER 21786

#include <header.h>

int main_bench()
{
int n,i;
float a,b,p;
my_scanf("%d",&n);
my_scanf("%f%f",&a,&b);
p=b/a;
for(i=0;i<n-1;i++)
{
my_scanf("%f%f",&a,&b);
if(b/a-p>0.05) my_printf("better\n");
if(p-b/a>0.05) my_printf("worse\n");
if(p-b/a<=0.05&&b/a-p<=0.05) my_printf("same\n");
}
return 0;
}

