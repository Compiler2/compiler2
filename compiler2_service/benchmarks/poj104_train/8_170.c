#include <header.h>

int main_bench()
{
	int a[100],b[100];
	void sca(int x[100],int y[100]);
	void res(int x[100],int y[100]);
	void pri(int x[100],int y[100]);
	sca (a,b);
	
	
}
void sca(int x[100],int y[100])
{
	int m,n,i,j,k;
	my_scanf("%d %d",&m,&n);
	
	for(i=1;i<=m;i++)
	my_scanf("%d",&x[i]);
	
	for(i=1;i<=n;i++)
	my_scanf("%d",&y[i]);
	
	for(i=1;i<=m;i++)
		{
			for(j=1;j<=m-i;j++)
			{
				if(x[j]>x[j+1])
				{
					k=x[j];
					x[j]=x[j+1];
					x[j+1]=k;
				}
			}
		}
	for(i=1;i<=m;i++)
		my_printf("%d ",x[i]);
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
			{
				if(y[j]>y[j+1])
				{
					k=y[j];
					y[j]=y[j+1];
					y[j+1]=k;
				}
			}
		}
	for(i=1;i<n;i++)
		my_printf("%d ",y[i]);
	my_printf("%d",y[n]);
	
		
	
}