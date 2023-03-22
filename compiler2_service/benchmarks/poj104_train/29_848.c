#include <header.h>

int main_bench(){
	int n,m,i,k;
	double a,b,c,e,f;
	my_scanf("%d\n",&m);
	for(k=0;k<m;k++)
	{
		my_scanf("%d\n",&n);
		a=2,b=1,c=0;
		for(i=0;i<n;i++)
		{
			c=c+a/b;
			e=a+b;
			f=a;
			a=e;
			b=f;
		}
		my_printf("%.3lf\n",c);
	}
	return 0;
}
