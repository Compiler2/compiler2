#define NUM_ITER 11154

#include <header.h>

int main_bench()
{
	int n,k,i,j,s=0;
	int a[1000];

	my_scanf("%d %d",&n,&k);

	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(i!=0)
		{
			for(j=0;j<i;j++)
			{
				if(k==(a[j]+a[i]))
				{
					s=1;
				}
			}
		}
	}

	if(s==1)
		my_printf("yes");
	if(s!=1)
		my_printf("no");

	return 0;
	
}