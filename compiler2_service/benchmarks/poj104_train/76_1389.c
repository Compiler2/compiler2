#define NUM_ITER 3044

#include <header.h>

int main_bench()
{
    int n,a[10000],b[10000],i,s=0,p,x,y;
    double l;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    my_scanf("%d %d\n",&a[i],&b[i]);
    x=a[0];
    y=b[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<x)
        {
            x=a[i];
        }
    }
   for(i=0;i<n;i++)
   {
       if(b[i]>y)
       {
           y=b[i];
       }
   }
   for(l=x+0.5;l<y;l=l+1.0)
   {
       p=0;
       for(i=0;i<n;i++)
       {
           if(l>=a[i]&&l<=b[i]){p++;}
       }
       if(p>0){s++;}
   }
   if(s==y-x)
   {
       my_printf("%d %d\n",x,y);
   }
   else {my_printf("no");}
   return 0;
}