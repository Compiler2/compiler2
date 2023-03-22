#define NUM_ITER 53536

#include <header.h>

int main_bench()
{
int n,z[100],i;
double a=0,b=0,c=0,d=0;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%d",&z[i]);
if(z[i]>0&&z[i]<19)
{
a=a+1;
}
if(z[i]>18&&z[i]<36)
{
b=b+1;
}
if(z[i]>35&&z[i]<61)
{
c=c+1;
}
else if(z[i]>60)
{
d=d+1;
}}
my_printf("1-18: %.2lf%%\n",100*a/n);
my_printf("19-35: %.2lf%%\n",100*b/n);
my_printf("36-60: %.2lf%%\n",100*c/n);
my_printf("60??: %.2lf%%\n",100*d/n);
return 0;
}
