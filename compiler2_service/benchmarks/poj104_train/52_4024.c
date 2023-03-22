#include <header.h>

void move(int a[],int n,int m);
int main_bench()
{
	int n,m,i,a[100],*p;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{my_scanf("%d",&a[i]);}
	move(a,n,m);
	for(i=0;i<n-1;i++)my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);
	my_printf("\n");
}
void move(int a[],int n,int m)	
{
	int *p,i,t;
	t=a[n-1];
	for(p=(a+n-1);p>a;p--)
	*p=*(p-1);
	*a=t;
	m--;
	if(m>0)move(a,n,m);
}

