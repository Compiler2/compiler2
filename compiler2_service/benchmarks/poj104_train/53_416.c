#include <header.h>

main_bench()
{
	int n,i,j,k=0,a[300],b[300];
	my_scanf("%d %d",&n,&a[0]);
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		for(j=0;j<i;j++)
			if(a[i]==b[j])break;
		if(j==i)
		{
			k++;
			b[k]=a[i];
		}
	}
	for(i=0;i<k+1;i++)
	{
		my_printf("%d",b[i]);
		if(i!=k)my_printf(",");
	}
}