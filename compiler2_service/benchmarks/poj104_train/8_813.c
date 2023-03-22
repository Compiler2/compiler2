#define NUM_ITER 2225

#include <header.h>

void f(int p, int n)
{
	int i, j;
	int a[100];
	for (i=0; i<n; i++) 
		my_scanf("%d", &a[i]);
	for (i=1; i<n; i++) {
		for (j=1; j<n-i+1; j++) {
			if (a[j]<a[j-1]) {
				a[j-1]=a[j]+a[j-1];
				a[j]=a[j-1]-a[j];
				a[j-1]=a[j-1]-a[j];
			}
		}
	}
	for (i=0; i<n-1; i++)
		my_printf("%d ", a[i]);
	my_printf("%d", a[n-1]);
	if(p>0)
		my_printf(" ");
}
int main_bench()
{
	int i, n1, n2;
	my_scanf("%d%d", &n1, &n2);
	f(1, n1);
	f(0, n2);
	return 0;
}