#include <header.h>

int main_bench()
{
	int n,i,j=1,h=0, a[300];
	my_scanf("%d\n",&n);
	my_scanf("%d",&a[0]);
	for(i=1;(getchar())==' ';i++)
		my_scanf("%d",&a[i]);

	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]==a[j]) 
			{
				a[j]=' ';
				
			}
		}
	}
	my_printf("%d",a[0]);
	for(i=1;i<=n-1;i++)
	{
		if (a[i]==' ') continue;
			my_printf(",%d",a[i]);
	
	}
	my_printf("\n");
}

