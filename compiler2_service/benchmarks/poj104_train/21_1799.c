#define NUM_ITER 53198

#include <header.h>


int main_bench()
{
   int n,i=0,sum=0,t,j;
   double max=0;
   double aver;
   int a[300];
   double b[300];
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   my_scanf("%d",&a[i]);
	   sum=sum+a[i];
   }
   aver=(double)sum/n;
   

   for(i=0;i<n;i++)
   { 
	   b[i]=fabs((a[i]-aver));
	   if(b[i]>=max) max=b[i];
   }
   for(i=0;i<n;i++)
   {
	   if(b[i]==max) 
	   {
		   my_printf("%d",a[i]);
           t=i;
		   break;
	   }
   }
   for(i=t+1;i<n;i++)
   {
	   if(b[i]==max) 
	   {
		   my_printf(",%d",a[i]);
	   }
   }
   return 0;
}