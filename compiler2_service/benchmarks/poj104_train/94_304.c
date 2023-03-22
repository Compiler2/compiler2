#include <header.h>

int main_bench()
{
	int n,i,k,a,jishu[500],e;
	my_scanf("%d",&n);
	k=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a);
		if(a%2!=0)
		{
		    jishu[k]=a;
			k++;
		}
	}
	for(i=1;i<=k;i++)
	{
		for(a=0;a<k-i;a++)
		{
			if (jishu[a]>jishu[a+1])
			{
				e=jishu[a+1];
				jishu[a+1]=jishu[a];
				jishu[a]=e;
			}
		}
	}
    for(i=0;i<k;i++)
	{
		if(i==k-1)
		{
		    my_printf("%d",jishu[i]);
		}
		else
		{
        	my_printf("%d,",jishu[i]);
		}
	}
	return 0;
}
