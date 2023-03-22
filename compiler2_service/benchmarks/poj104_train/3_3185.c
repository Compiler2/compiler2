#define NUM_ITER 54257

#include <header.h>

int main_bench()
{
	int n,k,m[1000],i,j;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	my_scanf("%d",&m[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(m[i]+m[j]==k)
				break;
			if(j!=n)
				break;
	}
	if(i==n)
		my_printf("no");
		else
		my_printf("yes");
		return 0;
}

			

		


	
	


