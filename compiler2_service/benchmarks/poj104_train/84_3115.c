#include <header.h>

int main_bench()
{
	int a[100];
	int n,t,i,j;
	my_scanf("%d",&n);
	if(n>1&&n<100)
	{
	    for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
		my_printf("\n");
		for(j=0;j<n-1;j++)
		{	for(i=0;i<n-1-j;i++)
				if((abs(a[i]))>(abs(a[i+1])))
				{
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
		}
		my_printf("%d\n%d\n",a[n-1],a[n-2]);
		
	}
}