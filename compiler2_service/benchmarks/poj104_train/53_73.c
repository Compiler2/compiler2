#define NUM_ITER 15620

#include <header.h>


char belong(int m,int a[],int j)
{
	int i;
	for(i=1;i<=j;i++)
		if(m==a[i])
			return(0);
	return(1);
}

int main_bench()
{
	int n,i,j=0,a[300],b[300]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		if(belong(a[i],b,j))
		{
			j++;
			b[j]=a[i];
		}
	for(i=1;i<=j-1;i++)
		my_printf("%d,",b[i]);
		my_printf("%d",b[j]);

	
}