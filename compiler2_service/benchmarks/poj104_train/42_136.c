#define NUM_ITER 48496

#include <header.h>

int main_bench()
{
	int n,a[100000],k,i,j,b[100000],c;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
    j=0;
	c=0;
	for(i=0;i<n;i++)
	{	
		if(a[i]!=k)
		{b[j]=a[i];j=j+1;c=c+1;}
	}
	for(j=0;j<c-1;j++)
		my_printf("%d ",b[j]);
	my_printf("%d\n",b[j]);
}