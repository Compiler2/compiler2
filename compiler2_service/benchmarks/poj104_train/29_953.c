#include <header.h>


int main_bench()
{

	int m,n,i=0,j=0;
    double sum=0,a=2,b=1;
    my_scanf("%d",&m);
	for(j=0;j<m;j++)
	{ my_scanf("%d",&n);
	  for(i=0;i<n;i++)
	  { sum+=(a/b);
	    a+=b;
		b=a-b;
	  }
     my_printf("%.3lf\n",sum);
   a=2;
   b=1;
   sum=0;

	}
   

	return 0;
}