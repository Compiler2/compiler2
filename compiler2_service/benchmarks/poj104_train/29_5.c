#define NUM_ITER 4139

#include <header.h>

char br[1000][8],jl[1000][8];
int main_bench(){
   int i,n,m,j;
   double a,b,c,d,sum=0.0;
   my_scanf("%d",&n);
   for (i=0;i<n;i++){
	   my_scanf("%d",&m);
	   a=1.0,b=2.0;
	   for (j=0;j<m;j++){
		   c=b/a;
		   sum+=c;
           d=b;
		   b=b+a;
		   a=d;
	   }
	   my_printf("%.3lf\n",sum);
	   sum=0.0;
   }
	return 0;
}