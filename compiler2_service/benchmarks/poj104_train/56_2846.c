#include <header.h>

int main_bench(){
	int n, x, i;
	int sz[5];
	my_scanf("%d", &n);
	x=n;
	for(i=1;i<=5;i++){
        sz[i]=x%10;
		x/=10;		
		my_printf("%d", sz[i]);
		if (x==0)
			break;
	}
	return 0;
}