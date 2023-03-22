#include <header.h>


int a[20010];

int main_bench()
{
	int n,i,tmp,k,ii=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&tmp);
		int j;
		int flag = 0;
		for(j=0;j<i;j++)
		{
			if(a[j]==tmp)
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			a[ii] = tmp;
			ii++;
			
		}
		
	}
	for(k=0;k<ii-1;k++)
	{
		my_printf("%d ",a[k]);
	}
	my_printf("%d",a[ii-1]);
	
}
