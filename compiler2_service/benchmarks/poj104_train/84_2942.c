#define NUM_ITER 2043292

#include <header.h>

int main_bench()
{
	int n;
	int first,second;
	int x,i;
	my_scanf("%d\n",&n);
	if(n>1&&n<100)
	{
		if(n==1)
		{
			int a;
			my_scanf("%d",&a);
			first = second=a;
		}
		else{
			for(i=0;i<n;i++)
			{
		       my_scanf("%d",&x);
				if(i==0)
				{			
					first=x;
					second=0;
				}
				else
				{
					if(first<x)
					{
						second=first;
						first=x;						
					}
				    else if(second<x)
					{
					    first=first;
					    second=x;
					}
				}
			
			}
		}
		my_printf("%d\n%d",first,second);
	}
return 0;
}