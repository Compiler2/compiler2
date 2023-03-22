#include <header.h>

int main_bench()
{
	int n,k,i,j,count=0;
	int *a;
	my_scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	for(i=0;i<=n-1-count;i++)
	{
		if(a[i]==k)
		{
			count++;
			for(j=i+1;j<=n-count;j++)
				a[j-1]=a[j];
			i--;
		}
		
	}
	my_printf("%d",a[0]);
	for(i=1;i<=n-1-count;i++)
		my_printf(" %d",a[i]);
	my_printf("\n");
	return 0;
}