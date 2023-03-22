#include <header.h>

int main_bench()
{

	int a[300], n, i,j,sum=0, t;
	float aver, c=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d", &a[i]);
		sum=sum+a[i];
	}
	aver=(float)sum/n;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
		if(aver-a[0]>a[n-1]-aver)
			my_printf("%d",a[0]);
		else if(aver-a[0]<a[n-1]-aver)
			my_printf("%d",a[n-1]);
		else
			my_printf("%d,%d",a[0],a[n-1]);


	return 0;
}