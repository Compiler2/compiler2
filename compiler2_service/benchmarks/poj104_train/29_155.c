#include <header.h>

int main_bench()
{
	int m,n,i,j;
	double a=2,b=0;
	my_scanf("%d",&m);
	 for(i=0;i<m;i++)
	 {
		 double sum=2;
		 my_scanf("%d",&n);
         for(j=0;j<n;j++)
		  {
			  
			  sum+=b;
			  b=1/a+1;
			  a=1/a+1;
		  }
		  my_printf("%.3lf\n",sum);
		  a=2;
		  b=0;

	 }
	 return 0;
}
