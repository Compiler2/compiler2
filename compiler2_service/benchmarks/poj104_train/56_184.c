#define NUM_ITER 1330927

#include <header.h>


int main_bench()
{
	int m = 0;
	int n;

	my_scanf("%d", &n);
	int a[5];
	int i = 0;
	while(n>=1)
	{
		a[i] = n%10;
		n = (int)(n/10);
		i++;
	}
	int k = 0 ; 
	int j = 0 ;
	for(j = i; j >0; j--, k ++)
	{
		m = 10*m + a[k];
	}
	my_printf("%d", m);
}