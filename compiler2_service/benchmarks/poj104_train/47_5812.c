#include <header.h>

int  main_bench( )
{
   int a[1000];
   int n,i;
   my_scanf ("%d",&n);
   for(i=0;i<n;i=i+1)
   {
	   my_scanf ("%d",&a[i]);
   }
   for(i=0;i<n;i=i+1)
   {
	   if (i==0)
	   my_printf("%d",a[n-1]);
	   else
		   my_printf(" %d",a[n-1-i]);
   }
return 0;
}

