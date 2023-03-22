#define NUM_ITER 2663

#include <header.h>

int m,n,a[800],b[800];
int main_bench()
{
	void f1();
	void f2();
	void f3();
	void f4();
	f1();
	f2();
	f3();
	f4();
}
void f1()
{
	my_scanf("%d%d",&m,&n);
}
void f2()
{
	int i;
	for(i=0;i<m;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		my_scanf("%d",&b[i]);
}
void f3()
{
	int i,j,temp;
	for(i=0;i<m;i++)
	{	for(j=i+1;j<m;j++)
			if(a[j]<a[i])
			{temp=a[i];a[i]=a[j];a[j]=temp;}
	}
	for(i=0;i<n;i++)
	{	for(j=i+1;j<n;j++)
			if(b[j]<b[i])
			{temp=b[i];b[i]=b[j];b[j]=temp;}
	}
}
void f4()
{
	int i,j;
	for(i=0;i<m;i++)
		my_printf("%d ",a[i]);
	for(j=0;j<n-1;j++)
		my_printf("%d ",b[j]);
	my_printf("%d",b[n-1]);
}
