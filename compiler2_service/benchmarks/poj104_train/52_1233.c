#define NUM_ITER 3090

#include <header.h>

int main_bench()
{
	int i,j,k,m,n,a[100]={15, 3, 76, 67, 84, 87, 13, 67, 45, 34, 45};
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)      
		my_scanf("%d",a+i);

	for(i=0;i<m;i++)
	{
		k=a[n-1];
		for(j=0;j<n-1;j++)a[n-1-j]=a[n-2-j];
		a[0]=k;
	}
	for(i=0;i<n-1;i++)my_printf("%d ",*(a+i));	my_printf("%d\n",a[i]);
}