#define NUM_ITER 53596

#include <header.h>

int main_bench()
{
	int n,k,i,j,a[1000],b,q=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		q=0;
		for(j=0;j<n-i-1;j++)
		{
		b=a[i]+a[j+1];
		if(b==k)
		{
			my_printf("yes\n");
			q++;
		    return 0;
		}
		else
		{
			q=-1;
		}
		}
	}
	if(q==-1)
		my_printf("no\n");
	return 0;
}


