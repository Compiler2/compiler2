#define NUM_ITER 52067

#include <header.h>

int main_bench(){
int n,a,b,c,d;
int  x[100];
a=0;
b=0;
c=0;
d=0;
my_scanf("%d",&n);
for(int i=0;i<n;i++)
my_scanf("%d",&(x[i]));
for(int i=0;i<n;i++)
{if(x[i]>=1&&x[i]<=18)
{a++;}
else if(x[i]>=19&&x[i]<=35)
{b++;}
else if(x[i]>=36&&x[i]<=60)
{c++;}
else
{d++;}
}
my_printf("1-18: %.2lf%%\n",a*100.0/n);
my_printf("19-35: %.2lf%%\n",b*100.0/n);
my_printf("36-60: %.2lf%%\n",c*100.0/n);
my_printf("Over60: %.2lf%%\n",d*100.0/n);
return 0;
}
