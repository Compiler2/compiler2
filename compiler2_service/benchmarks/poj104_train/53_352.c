#define NUM_ITER 9279

#include <header.h>

int main_bench()
{
	int n,i,j,num=0,k=1;
	int a[300],b[300];
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[j]=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==0)
			num=num+1;
	}
	
		for(i=0;i<n;i++)
		{
			if(b[i]==0)
			{
				if(k<num)
				{
					my_printf("%d,",a[i]);
					k++;
				}
				else
				{
					my_printf("%d",a[i]);
					break;
				}
			}
		}
	my_printf("\n");
}