#define NUM_ITER 4071

#include <header.h>

int Max(int n,int a[])
{
   int x=0;
   for(int i=0;i<n;i++)
   {
       if(x<a[i])
       x=a[i];
   }
   return x;
}
main_bench()
{
   int x,n,i,j,b=1;
   int *p;
   int *q;
   my_scanf("%d",&n);
   p=(int *)malloc(n*sizeof(int));
   q=(int *)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
       my_scanf("%d",p+i);
   for(i=n-1;i>=0;i--)
   {
      
      {   x=0;
          for(j=i+1;j<n;j++)
          {
             if((p[i]>=p[j])&&(x<q[j]))
                 x=q[j];
          }
          q[i]=x+1;      
      }
   }
   my_printf("%d",Max(n,q));       
}