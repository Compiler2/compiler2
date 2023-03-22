#define NUM_ITER 19418

#include <header.h>

int main_bench()
{
	int n,i,j,k,l,m;
	int a[500],b[500];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	my_printf("\n");
	for(i=0,j=0,k=0;i<n;i++)
	{if(a[i]%2==1)
	{b[j]=a[i];
	j++;
	k++;
	}
	}
	for(j=0;j<k;j++)
	{for(l=j+1;l<k;l++)
	{
	if(b[l]<b[j])
	{m=b[l];b[l]=b[j];b[j]=m;}
	}
	if(j==0)
		my_printf("%d",b[j]);
	else
	my_printf(",%d",b[j]);
	}
	my_printf("\n");
	return 0;
}