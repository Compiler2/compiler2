#include <header.h>

int main_bench()
{ int n,i,j;float t,sum,b[100];unsigned a[100],max,min;
     my_scanf("%d",&n);
    for(i=0;i<n-1;i++)
   my_scanf("%u ",&a[i]);my_scanf("%u",&a[n-1]);
    sum=0.0;
     for(i=0;i<n;i++)
     sum=sum+a[i];
     t=sum/n;
   max=a[0];min=a[0];
   for(i=0;i<n;i++)
   {if(a[i]>max)max=a[i];if(a[i]<min)min=a[i];}
      if(max-t==t-min)my_printf("%d,%d",min,max);
    else if(max-t>t-min)my_printf("%d",max);
    else my_printf("%d",min);
}
    
    
 