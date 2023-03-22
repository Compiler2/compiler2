#define NUM_ITER 7897

#include <header.h>

int main_bench()
{
	void move(int a[],int n,int m);
	int n,m;
	int i;
	int a[100];
	int *p;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	move(a,n,m);
	for (i=0;i<n;i++)
		if(i!=n-1)
		my_printf("%d ",a[i]);
		else
		my_printf("%d",a[i]);
	return 0;
}

void move(int a[],int n,int m)
{
	int *p;
	int al;
	al=*(a+n-1);
	for(p=a+n-1;p>a;p--)
		*p=*(p-1);
		*a=al;
		m=m-1;
		if (m>0)
			move(a,n,m);
}


