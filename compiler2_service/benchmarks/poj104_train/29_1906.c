#define NUM_ITER 3176

#include <header.h>

int main_bench()
{
	double s,l,t;
	int i,j,k,m;
	s=2;
	l=1;
	
	
	double b=0,c;
	int a[100];
	my_scanf("%d", &m);
	for(i=1;i<=m;i++)
	{
		my_scanf("%d", &a[i]);
	}
	
		for(k=1;k<=m;k++)
		{
		for(j=1;j<=a[k];j++)
		{
			c=s/l;
			b=b+c;
			t=l+s;
			l=s;
			s=t;
		}
		my_printf("%.3f", b);
		b=0;
		s=2;
		l=1;
		my_printf("\n");
		}
		return 0;
}