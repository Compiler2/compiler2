#define NUM_ITER 54145

#include <header.h>

int main_bench()
{  int i,m,n,sum=0,max,min;
   int num[300];
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
	  { my_scanf("%d",&num[i]);
         sum+=num[i];
	  }
   max=num[0];
   min=num[0];
   for(i=0;i<n;i++)
   {  if(num[i]>max) max=num[i];
      if(num[i]<min) min=num[i];
   }
   m=2*sum-n*(max+min);
   if(n==1) my_printf("%d",num[0]);
   if(m>0) my_printf("%d",min);
   if(m==0&&n!=1) my_printf("%d,%d",min,max);
   if(m<0) my_printf("%d",max);
   return 0;
}