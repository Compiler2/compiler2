#define NUM_ITER 1626457

#include <header.h>


int main_bench()
{
   double n,i,k=1;
   my_scanf("%lf",&n);
   if(n==0){
	   my_printf("1");
   }else{
	   for(i=0;i<n;i++){
           k=2*k;
	   }
       my_printf("%.0lf",k);
   }
	return 0;
}
