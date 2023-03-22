#define NUM_ITER 57206

#include <header.h>

int main_bench()
{
    int n,i,b,c;
    int a[100];
    my_scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    my_scanf("%d",&a[i-1]);
    }
    b=a[0];
    for(i=0;i<n;i++)
    {
    if(b<a[i])
    b=a[i];
    }
    my_printf("%d\n",b);
   if(b==a[0])
     c=a[1];
     else c=a[0]; 
   for(i=0;i<n;i++)
    {
     if(c<a[i]&&a[i]<b)
      c=a[i];
    }
   my_printf("%d",c);   
 return 0;
}