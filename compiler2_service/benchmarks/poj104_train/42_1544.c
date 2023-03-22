#include <header.h>

int main_bench()
{
	int n;
	int a[100001];
	int k;
	int i;
	int sum;
	sum=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{my_scanf("%d",&a[i]);}
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
				sum=sum+1;
		if(i==0)
		{
			if(a[i]!=k)
				my_printf("%d",a[i]);

		}
		if(i!=0)
		{

			if(a[i]!=k)
			{
				if(i!=sum)
					my_printf(" %d",a[i]);

				if(i==sum)
					my_printf("%d",a[i]);}
		}
		
	}
    



	



	return 0;
}
