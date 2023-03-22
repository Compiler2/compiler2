#define NUM_ITER 14553

#include <header.h>

int main_bench()
{
	int n,i,j,a[20001];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
	         break;
			else	
		    continue;	

		}
		if(j==i)
		{	
			if(i==0)
			my_printf("%d",a[i]);
			else
             my_printf(" %d",a[i]);
		}
		else
			continue;
	}
}