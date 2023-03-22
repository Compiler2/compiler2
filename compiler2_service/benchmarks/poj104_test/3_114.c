#define NUM_ITER 57154

#include <header.h>



int main_bench()
{
   int i,j,n,k,b,judge=0;
   my_scanf("%d",&n);
   my_scanf("%d",&k);
   int a[1001];
   for(i=1;i<n+1;i++)
   {
	   my_scanf("%d",&a[i]);
   }
   for(i=1;i<n+1;i++)
   {
	   for(j=1;j<n+1;j++)
	   {
		   if(i!=j)
		   {
			   b=a[i]+a[j];
			   if(b==k)
			   {
				   my_printf("yes");
			       judge=1;
				   break;
			   }
		   }
	   }
   if(judge==1)
	   break;
   
   if(i==n)
   {
	   my_printf("no");
   }
   
   
   }
	return 0;
}