#include <header.h>

int main_bench(){
	int n,m=0,a=0;
	my_scanf("%d",&n);
	while(n!=a){
		a=n%10;
		if(a==n)
			break;
		else{
			m=m*10+a*10;
		}
		n=n/10;
	}
	m=m+a;
	my_printf("%d",m);
	return 0;
}
