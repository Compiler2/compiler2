#include <header.h>

int main_bench()
{
	int a[100][100]={0};
	int k;
	int sum=0;
	int i,j,l;
	int m,n;
	my_scanf("%d",&k);
	for (i=0;i<k;i++)
	{
		my_scanf("%d%d",&m,&n);
		if (n==1&&m==1)
		{
			my_scanf("%d",&sum);
		    my_printf("%d",sum);
		    sum=0;
		}
		else
		{for (j=0;j<m;j++)
		{
			for (l=0;l<n;l++)
			{
				my_scanf("%d",*(a+j)+l);
			}
		}
		for (l=0;l<n;l++)
		{
			sum=sum+*(*(a+0)+l)+*(*(a+m-1)+l);
		}
        for (l=0;l<m;l++)
		{
			sum=sum+*(*(a+l)+0)+*(*(a+l)+n-1);
		}
		sum=sum-*(*(a+0)+0)-*(*(a+0)+n-1)-*(*(a+m-1)+0)-*(*(a+m-1)+n-1);
		my_printf("%d\n",sum);
	    sum=0;
		}
	}
	return 0;
}
        