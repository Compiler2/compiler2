#define NUM_ITER 8262

#include <header.h>

int move(int a[100],int n,int m)
{
	int *p,end;
	end=*(a+n-1);
	for(p=a+n-1;p>a;p--)
	{
		*p=*(p-1);
	}
	*a=end;
	m--;
	if(m>0)
		move(a,n,m);
}
int main_bench()
{
	int a[100],m,n,i;
	my_scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	move(a,n,m);
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",a[i]);
	}
         my_printf("%d",a[n-1]);
}

