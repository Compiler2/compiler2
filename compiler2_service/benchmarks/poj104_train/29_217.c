#include <header.h>

int main_bench()
{   int i,n,m,j;
	double a,b,s,x,y;
    my_scanf("%d",&m);
	for(i=0;i<m;i++){
	   my_scanf("%d",&n);
	   a=2.000;
	   b=1.000;
	   s=0;
	   for(j=0;j<n;j++){
	      s=s+(double)(a/b);
		  x=a;
		  y=a+b;
		  b=x;
		  a=y;
	   }
	   my_printf("%.3lf\n",s);
	}
	return 0;
}
