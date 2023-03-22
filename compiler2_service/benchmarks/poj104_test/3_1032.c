#include <header.h>

int sz[1010];
int main_bench()
{
	int n,i,a,b,c,h=0,k=0,j=0;
	my_scanf("%d %d\n",&n,&k);
    my_scanf("%d",&sz[0]);
    for(i=1;i<n;i++)
	{
		my_scanf(" %d",&sz[i]);
	}
    for(i=0;i<n;i++)
	{
		
		for(j=n-1;j>i;j--)
		{
			if(sz[i]+sz[j]==k)
			{
				my_printf("yes");
				h=1;
				break;
			}
		}
		if(h==1)
		{
			break;
		}
	}
	if(h==0)
	{
		my_printf("no");
	}
	return 0;
}
