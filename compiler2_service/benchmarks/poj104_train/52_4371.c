#define NUM_ITER 57340

#include <header.h>

int main_bench()
{
	void order(int p,int q,int r[]);
	int n1,n2,i;
	int a[10000];	
	my_scanf("%d %d",&n1,&n2);
	for(i=1;i<=n1;i++)
		my_scanf("%d",&a[i]);
	order(n1,n2,a);
	return 0;
}
void order(int n1,int n2,int a[])
{
	int i;
	for(i=n1-n2+1;i<=n1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[1]);
	for(i=2;i<=n1-n2;i++)
		my_printf(" %d",a[i]);
}
	