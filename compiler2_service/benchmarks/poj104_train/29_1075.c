#define NUM_ITER 5336

#include <header.h>

int main_bench(){
   int m,n;
   my_scanf("%d",&m);
   for(int i=0;i<m;i++){
       my_scanf("%d",&n);
       double s=0;
       int a=2,b=1,c;
	   for(int j=1;j<=n;j++){
		   s+=(1.0*a)/b;
		   c=a;
		   a=a+b;
		   b=c;
	   }
	   my_printf("%.3lf\n",s);
   }
   return 0;
 }