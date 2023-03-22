#include <header.h>

int main_bench()
{
	int n,i,j,k,m;
	int left0,right0;
	int left1,right1;
	left0=-1;
	right0=-1;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			my_scanf("%d",&k);
			if((k==0)&&(left0==-1)&&(right0==-1))
			{
                left0=i;
			    right0=j;
			}
			if(k==0)
			{
				left1=i;
				right1=j;
			}
		}
	}
	int t=0;
	if(((left1-left0)>1)&&((right1-right0)>1))
	{
		m=(left1-left0-1)*(right1-right0-1);
	    my_printf("%d\n",m);
	}
	else my_printf("%d\n",t);
	return 0;
}