#include <header.h>

int main_bench()
{
   int n,i;
   int sz[120],sz1[10]={0};
   double a,b,c,d;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       my_scanf("%d",&sz[i]);
   }
   for(i=0;i<n;i++)
   {
       if(sz[i]>=1&&sz[i]<=18)
       {    sz1[0]++;
       }
       else if(sz[i]>=19&&sz[i]<=35)
       {
            sz1[1]++;
       }
       else if(sz[i]>=36&&sz[i]<=60)
       {
            sz1[2]++;
       }
       else
       {
            sz1[3]++;
       }
    }
    a=(double)sz1[0]*100/n;
    b=(double)sz1[1]*100/n;
    c=(double)sz1[2]*100/n;
    d=(double)sz1[3]*100/n;
    my_printf("1-18: %.2lf%%\n",a);
    my_printf("19-35: %.2lf%%\n",b);
    my_printf("36-60: %.2lf%%\n",c);
    my_printf("60??: %.2lf%%\n",d);
    return 0;
}