#include <header.h>

int main_bench(){
int n,i;
my_scanf("%d",&n);
double m,p,c,q; 
for(i=0;i<n;i++){		
		my_scanf("%lf%lf",&m,&p);
		if(i==0){
	c=p/m;
		}
	else{
	q=p/m;
	if(q-c>0.05){
	my_printf("better\n");
	}
	else if(c-q>0.05){
	my_printf("worse\n");
	}
	else{
	my_printf("same\n");
	}
	}
	}
return 0;
}