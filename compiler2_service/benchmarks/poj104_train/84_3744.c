#define NUM_ITER 53344

#include <header.h>

int max(int a[],int n)
{
	int i,k=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[k])
			k=i;
	}
	i=a[k];
	a[k]=0;
	return i;

}
int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int a[100],i;
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_printf("\n%d",max(a,n));
	my_printf("\n%d",max(a,n));
	return 0;
}

