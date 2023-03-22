#define NUM_ITER 56850

#include <header.h>

int u[100];
int main_bench()
{
	double a=0,b=0,c=0,d=0;
	int n,i;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%d",&u[i]);
}
for(i=0;i<n;i++)
{
if(u[i]<=18)
a++;
if(u[i]>=19&&u[i]<=35)
b++;
if(u[i]>=36&&u[i]<=60)
c++;
if(u[i]>60)
d++;
}
a=a/n*100;
b=b/n*100;
c=c/n*100;
d=d/n*100;
my_printf("1-18: %.2f%%\n",a);
my_printf("19-35: %.2f%%\n",b);
my_printf("36-60: %.2f%%\n",c);
my_printf("60??: %.2f%%\n",d);
	   return 0;
}