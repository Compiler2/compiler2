#define NUM_ITER 46628

#include <header.h>

int main_bench()
{
   int n,m,i,j,p=0;
   int a[100],b[100];
   my_scanf("%d %d",&n,&m);
   for(i=0;i<n;i++) {
	   my_scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++) {
	   if(i+m<n) {
		   b[i+m]=a[i];
	   }
	   if((i+m)>=n) {
		   b[p]=a[i];
		   p++;
	   }
   }
   for(j=0;j<n-1;j++) {
	   my_printf("%d ",b[j]);
   }
       my_printf("%d",b[n-1]);
	   return 0;
} 
