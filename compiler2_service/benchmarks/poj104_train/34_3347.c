#define NUM_ITER 248983

#include <header.h>

void jg(int);
int main_bench()
{
	int n;
	my_scanf("%d",&n);
	jg(n);
}

void jg(int n)
{
	if (n==1) my_printf("End");
	else{
		if (n%2==0){
			my_printf("%d/2=%d\n",n,n/2);
			n = n/2;
		}
		else {
			my_printf("%d*3+1=%d\n",n,n*3+1);
			n = n*3+1;
		}
		jg(n);
	}
}
