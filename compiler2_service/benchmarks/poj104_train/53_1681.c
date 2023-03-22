#define NUM_ITER 8171

#include <header.h>


	int main_bench()
	{
		int n;
		my_scanf("%d",&n);
		int a[300];
		char c=',';
		int i,j;
		for(i=0;i<n;i++)
		{
			my_scanf("%d",&a[i]);
		}
			for(i=0;i<n;i++)
			{
				for(j=0;j<i;j++)
				{
					if(a[i]==a[j])
					{
						a[i]=0;
						break;
					}
				}
				if(a[i]!=0)
				{
					if(i==0)
					{
						my_printf("%d",a[i]);
					}
					else
					{
					my_printf("%c%d",c,a[i]);
					}
				
				}
			}
			return 0;
	}
		
			
			
							