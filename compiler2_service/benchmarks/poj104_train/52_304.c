#define NUM_ITER 8607

#include <header.h>

int a[100];
int main_bench()
{
	void f(int *p,int n,int m);
	int *p,n,m;
	my_scanf("%d %d",&n,&m);
	for(p=a;p<a+n;p++)
		my_scanf("%d",p);
	p=a;
	f(p,n,m);
	for(p=a;p<a+n;p++)
	{
		if(p<a+n-1)
			my_printf("%d ",*p);
		else
			my_printf("%d\n",*p);
	}	
	return 0;
}
void f(int *p,int n,int m)
{
	int t;
	p+=n-1;
	t=*p;
	for(;p>a;p--)
		*p=*(p-1);
	*p=t;
	m-=1;
	if(m>0)
		f(p,n,m);
}