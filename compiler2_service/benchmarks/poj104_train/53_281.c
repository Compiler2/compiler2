#define NUM_ITER 3797

#include <header.h>

int main_bench()
{
   int a[300];
   int i,n,j,s=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
	   my_scanf("%d",&a[i]);
   my_printf("%d,",a[0]);
   for(j=1;j<n;j++)
	   for(i=0;i<j;i++)
	   {
		   if(a[j]!=a[i])
		   {
			   if(i==j-1)
				   if(j>s) s=j;
		   }
		   else break;
	   }
   for(j=1;j<=s;j++)
   for(i=0;i<j;i++)
   {
		   if(a[j]!=a[i]) 
		   {
		     if(i==j-1&&j<s) my_printf("%d,",a[j]);
             else if(i==j-1&&j==s) my_printf("%d",a[j]);
		   }
	   else
		   break;
	}
}