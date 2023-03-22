#define NUM_ITER 52477

#include <header.h>

int main_bench()
{
	int n,k,h,i,j,sz[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
    for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(sz[i]+sz[j]==k)
			{
				h=1;
			    break;
			}
			if(sz[i]+sz[j]!=k)
				h=0;
		}
		if(h==1)
			break;
	    
	}
    if(h==1)
		my_printf("yes");
	else
		my_printf("no");
    return 0;
}

