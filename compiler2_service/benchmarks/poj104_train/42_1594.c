#include <header.h>

int main_bench()
{
	int a[100000],length;     
	int n,k,i,j;
	my_scanf("%d",&n);
    length=n;
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(j=i;j<n-1;j++)
				a[j]=a[j+1];
			i--;
			n--;
		}
	}
         my_printf("%d",a[0]);
	for(i=1;i<n;i++)
		my_printf(" %d",a[i]);
	my_printf("\n");
	return 0;
}