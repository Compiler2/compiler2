#define NUM_ITER 39969

#include <header.h>

int main_bench()
{
	int a[100];
	int i,n,number,count,countl;
	count=0;
	countl=0;
	for(i=0;i<100;i++)
	{
		a[i]=0;
	}
	my_scanf("%d",&n);
	int b[n];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&number);
		if(a[number]==0)
		{
			a[number]=1;
		
			b[count]=number;
				count=count+1;
		}		
	}
	for(i=0;i<count;i++)
	{
			countl=countl+1;
			my_printf("%d",b[i]);
			if(countl<count)
			{
				my_printf(" ");
			}
		
	}

	return 0;
}