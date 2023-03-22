#define NUM_ITER 51914

#include <header.h>

int main_bench()
{
	int i,j,k,m,n,u;
	int a[100],b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{my_scanf("%d",&a[i]);}
	for(j=0;j<n;j++)
	{
		b[j]=a[n-1-j];
	}
	for(m=0;m<n;m++)
	{
		my_printf("%d",b[m]);
		if(m<n-1)
		{
			my_printf(" ");
		}
	}
return 0;
}