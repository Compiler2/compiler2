#define NUM_ITER 333993

#include <header.h>

main_bench()
{
	int a[301],n=0,i,k=1,max,sub=0,t;
	char c;
	while((c=getchar())!='\n')
	{
		if(c>='0'&&c<='9')
		{
			n=n*10+c-'0';
		}
		else
		{
			a[k]=n;
			k++;
			n=0;
		}
	}
	a[k]=n;
	if(k!=1)
	{
		max=a[1];
		for(i=2;i<=k;i++)
		{
			if(a[i]!=max)
			{
				sub=a[i];
				break;
			}
		}
		if(sub==0)
			my_printf("No\n");
		else
		{
			if(sub>=max)
			{
				t=sub;
				sub=max;
				max=t;
			}
			for(;i<=k;i++)
			{
				if(a[i]>max)
				{
					sub=max;
					max=a[i];
				}
				else
				{
					if(a[i]==max)
						continue;
					else
					{
						if(a[i]>sub)
			         	 sub=a[i];
					}
				}
			}
			my_printf("%d\n",sub);
		}
	}
	else
		my_printf("No\n");
	return 0;
}