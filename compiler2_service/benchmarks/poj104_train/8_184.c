#include <header.h>

int m,n,a[100],b[100];
void f()
{
	my_scanf("%d %d",&m,&n);
	int i,j;
	for(i=0;i<=m-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(j=0;j<=n-1;j++)
	{
		my_scanf("%d",&b[j]);
	}
}

int g(int a[],int l)
{
	int i,j,t;
	for(j=0;j<l;j++)
	{
		for(i=0;i<l-j-1;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	return a[0];	
	
}
void p(int a[],int b[])
{
	int i,j;
	for(i=0;i<=m-1;i++)
	my_printf("%d ",a[i]);
	for(j=0;j<=n-2;j++)
		my_printf("%d ",b[j]);
	my_printf("%d",b[n-1]);
	

}
int main_bench()
{  
	f();
g(a,m);
g(b,n);
p(a,b);
}
