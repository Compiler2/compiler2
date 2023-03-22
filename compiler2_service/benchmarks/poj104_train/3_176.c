#include <header.h>


int main_bench()
{
    int n,k,i,j,count=0;
	my_scanf("%d%d",&n,&k);
	int*a=(int*)malloc(sizeof(int)*n);

	for (i=0;i<n;i++)
	{
		my_scanf("%d",a+i);
	}
    for (i=0;i<n-1;i++)
	{
		for (j=n-1;j>i;j--)
		{
			int b=k-a[i];
			if (b==a[j])
			{
				count++;
			}
		}
	}
	if (count!=0)
	{
		my_printf("yes\n");
	}
	else
	{
		my_printf("no\n");
	}
	free(a);
	return 0;
}