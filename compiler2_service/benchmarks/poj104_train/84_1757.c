#define NUM_ITER 43134

#include <header.h>


int main_bench()
{
	int n;
	int a[100],c[100];
	int i,b;
	int x=0;
	int y=0;

	my_scanf ("%d", &n);
	for (i=0; i<n; i++) {
		my_scanf ("%d", &a[i]);
	}
	for (i=0; i<n; i++) {
		b=a[i];
		if (b>x) {
			x=b;
		}
	}
	for (i=0; i<n; i++) {
		if (a[i]!=x){
			c[i]=a[i];
		}
	}
	for (i=0; i<n; i++) {
		b=c[i];
		if (b>y) {
			y=b;
		}
	}
	my_printf("%d\n",x);
	my_printf("%d\n",y);
	return 0;
}

