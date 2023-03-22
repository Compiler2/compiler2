#include <header.h>

int main_bench()
{
	int n,a[300],i,j,k,c=1,index;
	my_scanf("%d",&n);
    my_scanf("%d",&a[0]);
	for(i=1,index=0;i<n;i++)
	{
		my_scanf("%d",&k);
		for(j=0;j<=index;j++)
		{
			if(a[j]!=k)			
				c=c*1;				
			else c=0;
		}
		if(c==1)
		{
			index=index+1;
			a[index]=k;
		}
		c=1;
		
	}
	for(i=0;i<=index-1;i++)
		my_printf("%d,",a[i]);
	my_printf("%d",a[index]);
	
}