#include <header.h>

int main_bench()
{
	int a[300],n,i,k=0,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=i;j>=0;j--)
		{
			if(a[i]==a[j])
				k++;
		}
		if(k==1&&i==0)
			my_printf("%d",a[i]);
		if(k==1&&i>0)
			my_printf(",%d",a[i]);
	}
	my_printf("\n");
	return 0;
}


