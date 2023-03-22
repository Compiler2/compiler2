#include <header.h>


double sum(int n){
	int a=1,b=2;
	
	double c;
	double h=0;
	int i=1;
	int e;
	while(i<=n){
		c=(1.0*b)/(1.0*a);
		h+=c;
		e=a;
		a=b;
		b+=e;
		i++;
	}
	return h;
}







int main_bench()
{
	int m,n;
	double hs;
	my_scanf("%d",&m);
	for(int mm=0;mm<m;mm++){
		my_scanf("%d",&n);
		hs=sum(n);
		my_printf("%.3lf",hs);
		if(mm!=m-1){
			my_printf("\n");
		}
	}

    return 0;
}