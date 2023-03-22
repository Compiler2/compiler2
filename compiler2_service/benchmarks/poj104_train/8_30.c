#define NUM_ITER 2977

#include <header.h>

int m,n,a[20],b[20];
void len()
{
	int i;
	my_scanf("%d %d",&m,&n);
	
	for(i=0;i<m;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		my_scanf("%d",&b[i]);
}
void change()
{
	int i,j,middle;
	for(i=0;i<m-1;i++)
	{for(j=0;j<m-1-i;j++)
		{
			if(a[j]>a[j+1])
			{middle=a[j];
			a[j]=a[j+1];
			a[j+1]=middle;
			}
		}
	}

	for(i=0;i<n-1;i++)
	{	for(j=0;j<n-1-i;j++)
		{
			if(b[j]>b[j+1])
			{	middle=b[j];
			b[j]=b[j+1];
			b[j+1]=middle;
			}
		}
	}
}	
void prin()
{
	int i;
    for(i=0;i<m;i++)
	my_printf("%d ",a[i]);
	for(i=m;i<m+n-1;i++)
		my_printf("%d ",b[i-m]);
	if(i=m+n-1)
	my_printf("%d",b[n-1]);
}
int main_bench()
{ len();

	change();
	 prin();
	
}