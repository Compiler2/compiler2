#define NUM_ITER 53506

#include <header.h>

int main_bench()
{
   int n,i,a[100];
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     my_scanf("%d",&a[i]);
   }
   my_printf("%d",*(a+n-1));
   for(i=n-2;i>=0;i--)
   {
     my_printf(" %d",*(a+i));
   }
	return 0;
}