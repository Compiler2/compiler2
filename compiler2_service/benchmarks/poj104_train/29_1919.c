#include <header.h>

int main_bench()
{
	int m,c[100],i,j;
	float sum,chu;
	float a[100]={1,2};
	float b[100]={2,3};
	my_scanf("%d",&m);
	for (i=0;i<m;i++)
	{
		my_scanf("%d",&c[i]);
		sum=0;
		for (j=0;j<c[i];j++)
		{
			if (j>1)
			{
			    a[j]=a[j-2]+a[j-1];
			    b[j]=b[j-2]+b[j-1];
			}
			chu=b[j]/a[j];
			sum=sum+chu;
		}
		my_printf("%.3f\n",sum);
	}
	return 0;
}