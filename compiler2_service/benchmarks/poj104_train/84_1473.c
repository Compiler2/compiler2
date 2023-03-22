#define NUM_ITER 54654

#include <header.h>

int main_bench()
{
	int i,t,m,a,b,n;
	my_scanf("%d",&n);
	my_scanf("%d",&m);
	i=2;
a=m;
my_scanf("%d",&m);
b=m;
	while(i<n){
	my_scanf("%d",&m);
	if(a>=b){
		if(m>=a){
			b=a;
	a=m;
	}
		if(m<=b){
		a=a;
		b=b;}
		if(m<a&&m>b){
		a=a;
		b=m;}
		}else{
			if(m>=b){
		b=b;
		a=m;}
			if(m<b&&m>a){     
		a=b;
		b=m;}
			if(m<=a){
		t=b;
		b=a;
		a=t;}}
		i++;
	}
	my_printf("%d\n%d\n",a,b);
	return 0;
}