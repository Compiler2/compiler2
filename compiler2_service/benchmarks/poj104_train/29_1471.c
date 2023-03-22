#include <header.h>



int main_bench()
{
	int m,n,i,k;
	double a,b,s=0,e;
	my_scanf("%d",&m);
	
	a=1;
	b=2;
	for(i=0;i<m;i++){
		my_scanf("%d",&n);
		for(k=0;k<n;k++){
			s=s+b/a;
			e=a;
			a=b;
			b=a+e;
		}
				a=1;
				b=2;
				
				my_printf("%.3lf\n",s);
			
		s=0;
	
	}

	return 0;
}