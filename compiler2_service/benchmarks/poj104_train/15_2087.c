#include <header.h>


int main_bench()
{
   int n,i=0,a,sum=0,m;
   my_scanf("%d",&n);
   while(i<=n*n)
   {

	   my_scanf("%d",&a);
       i=i+1;
   if(a==0)
	   sum=sum+1;
   }
   m=sum*sum/16+1-sum/2;
   my_printf("%d\n",m);
   return 0;
}