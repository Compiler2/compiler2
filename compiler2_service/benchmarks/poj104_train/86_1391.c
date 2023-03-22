#include <header.h>

int main_bench()
{
	int n,m,a,b,t,x,c,d;
	int z[1000];
	my_scanf("%d",&n);
	for(a=0;a<=n-1;a++)
	{
		my_scanf("%d",&m);
		for(b=0;b<=m-1;b++)
		{
			my_scanf("%d",&z[b]);
		}
		if(m==0)
		{
			my_printf("60\n");
		}
		
		else
		{
		    t=60;x=0;c=0;d=0;
	    	while(t>0)
			{
			    t--;
				if(d==0)
				{
					if(c<m)
					{
					if(x==z[c]-1) 
					{
						d=3;
						c++;
					}
					}
					x++;
				}
				else d--;
			}
			my_printf("%d\n",x);
		}
		
	}
	return 0;
}