#include <header.h>

int main_bench()
{
	void line(int a[],int b[],int m,int n);
	int m,n,i,j,t;
	int a[1000],b[1000];
	my_scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	my_scanf("%d",&a[i]);
	my_scanf("\n");
	for(i=0;i<n;i++)
	my_scanf("%d",&b[i]);
	line(a,b,m,n);
}
void line(int a[],int b[],int m,int n)
{
	int i,j,t;
	for(j=0;j<m-1;j++)
		for(i=0;i<m-j-1;i++)
			if(a[i]>=a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	for(j=0;j<n-1;j++)
		for(i=0;i<n-j-1;i++)
			if(b[i]>=b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
	for(i=0;i<m;i++)
	my_printf("%d ",a[i]);
	for(i=0;i<n-1;i++)
	my_printf("%d ",b[i]);
	my_printf("%d",b[n-1]);
	}