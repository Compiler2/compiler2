#include <header.h>


int main_bench()
{
	int n,i,j,k,js,cunzai;
	my_scanf("%d",&n);
	int*a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_printf("%d",a[0]);
	
	for(i=1;i<n;i++)
	{
		cunzai=0;
		js=0;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				js++;
		}
		if(js==0)
		{
			my_printf(" %d",a[i]);

		}
	}
	return 0;
}
