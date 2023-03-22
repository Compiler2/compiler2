#include <header.h>


int main_bench()
{
    int n, i, j, a;
	my_scanf("%d",&n);	
	for(i=0;i<n;i++)
	{	
		int sum=60;
		my_scanf("%d",&a);
		for(j=0;j<a;j++)
		{
			int b;
			my_scanf("%d",&b);
			if(b<(sum-3))
			{
			    sum -= 3;
			}
			else if(b>=(sum-3)&&b<=sum)
			{
				sum=b;
			}
		}
			my_printf("%d\n",sum);
	}
	return 0;

}


