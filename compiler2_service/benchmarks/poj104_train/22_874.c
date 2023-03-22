#define NUM_ITER 1204043

#include <header.h>

int main_bench()
{
	int a,b,c,d=0,m=0,n=0;
	my_scanf("%d",&a);
    if(my_scanf(",%d",&c)=='\n')
		my_printf("No");
	else
	{
	while(my_scanf(",%d",&b)!=0)
	{
		m=0;
		n=b;
		if(a!=b||a!=c||b!=c)
			d=1;
		if(m<=a)
			m=a;
		if(m<=b)
			m=b;
		if(m<=c)
			m=c;
		if(n>=a)
			n=a;
		if(n>=b)
			n=b;
		if(n>=c)
			n=c;
		if(a>n&&a<m)
			c=a;
		else {if(b>n&&b<m)
			c=b;
		else {if(c>n&&c<m)
			c=c;
		else
			c=n;}}
		a=m;
	}
	if(d==1)
	my_printf("%d",c);
	else
		my_printf("No");
	}
	return 0;
}

