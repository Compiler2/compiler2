#define NUM_ITER 15309

#include <header.h>

int main_bench()
{
	int n,i,j,m,t,x,k;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&m);
		k=60;
		t=0;
	if(m!=0)
		{
			for(j=1;j<=m;j++)
			{
				my_scanf("%d",&x);
					k=k-3;
				    t=t+3;
				if(x+t>=60)
				{
					if(x+t<=65)
					{
					    k=x;
						break;
					}
					else
					{
						k=63-t;
				        break;
					}
				}
		    }   
	   }
	if(i==1)
		my_printf("%d",k);
	else
		my_printf("\n%d",k);
	}
 return 0;
}