#define NUM_ITER 233689

#include <header.h>


int main_bench()
{
	int n,m,i,j;
	int a[5][5];

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&n,&m);

	if(n<5&&n>=0&&m<5&&m>=0)
	{
		for(i=0;i<n;i++)
		{
			my_printf("%d",a[i][0]);
			for(j=1;j<5;j++)
				my_printf(" %d",a[i][j]);
			my_printf("\n");
		}
		my_printf("%d",a[m][0]);
		for(j=1;j<5;j++)
			my_printf(" %d",a[m][j]);
		my_printf("\n");
		for(i=n+1;i<m;i++)
		{
			my_printf("%d",a[i][0]);
			for(j=1;j<5;j++)
				my_printf(" %d",a[i][j]);
			my_printf("\n");
		}
		my_printf("%d",a[n][0]);
		for(j=1;j<5;j++)
			my_printf(" %d",a[n][j]);
		my_printf("\n");
		for(i=m+1;i<5;i++)
		{
			my_printf("%d",a[i][0]);
			for(j=1;j<5;j++)
				my_printf(" %d",a[i][j]);
			my_printf("\n");
		}
	}
	else
		my_printf("error\n");	
	
	return 0;
}