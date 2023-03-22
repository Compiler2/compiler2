#define NUM_ITER 5533

#include <header.h>

int main_bench()
{
	int m,n,i,*p,t;
	int a[100];
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	{
		t=a[n-1];
		p=a+n-1;
		while(p!=a)
		{
			*p=*(p-1);
			p--;
		}
		a[0]=t;
	}
	for(i=0;i<n;i++)
	{
		if(i)
			my_printf(" ");
		my_printf("%d",a[i]);
	}
	my_printf("\n");
}
