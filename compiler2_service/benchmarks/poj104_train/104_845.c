#include <header.h>

int main_bench()
{
	int f1(int n,int m);
	int m,n;
	my_scanf("%d%d",&n,&m);
	my_printf("%d\n",f1(n,m));
}

int f1(int n,int m)
{
	if(n==m)
		return n;
	else if(n>m)
	{
		if(n%2==0)
			return f1(n/2,m);
		else
			return f1((n-1)/2,m);
	}
	else
	{
		if(m%2==0)
			return f1(n,m/2);
		else
			return f1(n,(m-1)/2);
	}
}
