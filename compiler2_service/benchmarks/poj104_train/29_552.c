#define NUM_ITER 5296

#include <header.h>

int main_bench(){
int m,n;
int i,e,j;
double a,s=0;

int p,q;

my_scanf("%d",&m);


for(i=0;i<m;i++)
{

		my_scanf("%d",&n);
	if(i==0){
	p=2;q=1;
		for(j=0;j<n;j++){
			a=1.0*p/q;
			s=s+a;
	
			e=p;
	
			p=p+q;

			q=e;
	}

	my_printf("%.3lf",s);
	}

	else{
	s=0;
	p=2;q=1;
	for(j=0;j<n;j++){
		a=1.0*p/q;
		s=s+a;
	
		e=p;
	
		p=p+q;

		q=e;
	}

	my_printf("\n%.3lf",s);
	}
}
return 0;
}