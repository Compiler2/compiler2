#define NUM_ITER 53234

#include <header.h>


int main_bench()
{
	void change(int *a,int n);
	int i,n,a[100],*p=a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++,p++)
		my_scanf("%d",p);
	my_printf("\n");
	p=a;
	change(p,n);
	for(p=a;p<a+n-1;p++)
		my_printf("%d ",*p);
	my_printf("%d",*p);
}

void change(int *a,int n)
{
	int *i,*p,*j,m,temp;
	m=(n-1)/2;
	p=a+m;
	i=a;
	j=i+n-1;
	for(;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}

}