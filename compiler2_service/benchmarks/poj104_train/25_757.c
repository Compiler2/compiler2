#include <header.h>

int main_bench()
{
	int sz[200]={0},carry=0,i,k,n;
    my_scanf("%d",&n);
	if(n==0)
	{
		my_printf("1");
		return 0;
	}
	sz[0]=2;
	for(i=1;i<n;i++)
	{
		for(k=0;k<199;k++)
		{
			sz[k]=sz[k]*2+carry;
			carry=0;
			while(sz[k]>=10)
			{
				sz[k]-=10;
				carry++;
			}
		}
	}
    for(i=199;i>=0;i--)
	{
		if(sz[i]!=0)
		{
			for(i=i;i>=0;i--)
			{
				my_printf("%d",sz[i]);
			}
		    break;
		}
	}
	return 0;
}
