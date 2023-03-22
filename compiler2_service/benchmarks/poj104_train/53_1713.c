#define NUM_ITER 9324

#include <header.h>

int main_bench()
{
	int num[100],str[100];
	int i,j,k,l,m,n,index=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&num[i]);
	}
	my_printf("%d",num[0]);
	for(i=1;i<n;i++)
	{
		index=0;
		for(j=0;j<i;j++)
		{
			if(num[i]==num[j])
				index++;
		}
		if(index==0)
			my_printf(",%d",num[i]);
	}
}
