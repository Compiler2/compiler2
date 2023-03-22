#define NUM_ITER 8029

#include <header.h>

int main_bench()
{
	void f(int *p,int n,int m);
	int n,m,num[100],i;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&num[i]);
    f(num,n,m);
	for(i=0;i<n;i++)
	{
		if(i==0)
			my_printf("%d",num[i]);
		else
			my_printf(" %d",num[i]);
	}
	my_printf("\n");
}
void f(int *p,int n,int m)
{
	int *q,b;
	q=p;
	b=*(p+n-1);	
	for(q=p+n-1;q>p;q--)
		*q=*(q-1);
	*q=b;
	m--;
	if(m>0)
		f(p,n,m);

}


