#define NUM_ITER 2008

#include <header.h>

int main_bench()
{
	int n,i,j,si=0;
	int s[20000]={0};
	my_scanf("%d",&n);
	if(n>=5)
	{
		for(i=3;i<n-1;i++)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
					s[j]=1;
				else
					s[j]=0;
			}
			for(j=2;j<i;j++)
				si=si+s[j];
			if(si==0)
			{
				for(j=2;j<i;j++)
				{
					if((i+2)%j==0)
						s[j]=1;
					else
						s[j]=0;
				}
			}
			for(j=2;j<i;j++)
				si=si+s[j];
			if(si==0)
				my_printf("%d %d\n",i,i+2);
			si=0;
		}
	}
	else
		my_printf("empty\n");
	return 0;
}