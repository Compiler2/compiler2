#define NUM_ITER 33614

#include <header.h>

int main_bench()
{
	int n, i, m, b;
	my_scanf("%d", &n);
	int a[2*n+2];
	for(i=1; i<=2*n; i++)
		my_scanf("%d", &a[i]);
	m=0;
	b=0;
	for(i=1;i<=2*n;i=i+2)
	{
		if(a[i]>=90 && a[i]<=140 && a[i+1]>=60 && a[i+1]<=90)
		{
			m=m+1;
			if(m>b)
				b=m;
		}	
		else
			m=0;
	}
	my_printf("%d", b);

	return 0;
	
}