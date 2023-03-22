#define NUM_ITER 1598

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
void change(int x,int z[20])
{
	int i,j,middle;
	for(i=0;i<x-1;i++)
	{
		for(j=0;j<x-1;j++)
		{
			if(z[j]>z[j+1])
			{
			middle=z[j];
			z[j]=z[j+1];
			z[j+1]=middle;
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

	change(m,a);
	change(n,b);
	 prin();
	
}