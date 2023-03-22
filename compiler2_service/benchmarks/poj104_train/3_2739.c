#include <header.h>

int main_bench()
{
	int n,k,a,e[10008],i,j,m,log;
	log=0;
	my_scanf("%d %d",&n,&k);
	if(n==1)
	{
		if(n==k)
		{
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}else{
		my_scanf("%d",&a);
		e[1]=a;
	    for(i=2;i<=n;i++)
		{
	     	my_scanf(" %d",&a);
			e[i]=a;
		}
		for(j=1;j<=n;j++)
		{
			for(m=n;m>j;m--)
			{
				if((e[j]+e[m])==k)
				{
					my_printf("yes");
					log=1;
					break;
				}
			}
			if(log>0.1)
			{
				break;
			}
		}
		if(log<0.1)
		{
			my_printf("no");
		}
	}
		return 0;
}




