#define NUM_ITER 9670

#include <header.h>

int main_bench()
{
	int n,i,j,a[20001],flag[20001]={0},k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
				flag[j]=1;
		}
		if(flag[i]==0 && k==0)
			{
				my_printf("%d",a[i]);
				k++;
			}
		else if(flag[i]==0)
			my_printf(" %d",a[i]);
	}
}