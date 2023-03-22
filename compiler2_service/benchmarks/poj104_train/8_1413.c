#include <header.h>

void px(int a[100],int k)
{
	int i,j,b;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	for(i=0;i<k-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[k-1]);
}
void fz()
{
	int m,n,i,a[100],b[100];
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	px(a,n);
	my_printf(" ");
	for(i=0;i<m;i++)
		my_scanf("%d",&b[i]);
	px(b,m);
}	
int main_bench()
{
	fz();
	return 0;
}