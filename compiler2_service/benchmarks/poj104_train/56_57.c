#define NUM_ITER 2120761

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int i,l,h,m=n;
	for(i=0;l!=0;i++){
		l=m/10;
		m=l;
	}
	int g;
	for(g=0;g<i;g++){
		h=n%10;
		my_printf("%d",h);
		n=n/10;
	}
	return 0;
}