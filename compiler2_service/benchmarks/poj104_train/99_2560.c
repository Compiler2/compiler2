#define NUM_ITER 56690

#include <header.h>

int main_bench()
{
int a=0,b=0,c=0,d=0,n,i;
int sz[100];
my_scanf ("%d",&n);
for (i=0;i<n;i++)
{
   my_scanf("%d",&sz[i]);
}
for (i=0;i<n;i++)
{
   if(sz[i]<=18)
   a++;
   else if(sz[i]>=19&&sz[i]<=35)
   b++;
   else if(sz[i]>=36&&sz[i]<=60)
   c++;
   else if(sz[i]>60)
   d++;
}
my_printf("1-18: %.2lf%%\n",a*100.0/n);
my_printf("19-35: %.2lf%%\n",b*100.0/n);
my_printf("36-60: %.2lf%%\n",c*100.0/n);
my_printf("Over60: %.2lf%%\n",d*100.0/n);
return 0;
}