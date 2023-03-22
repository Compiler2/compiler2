#include <header.h>

int main_bench(){
	int n,k,i,a,l,j,h=0;
	int sz[1000];
	my_scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a);
		sz[i-1]=a;
	}
    for(i=0;i<n;i++)
	{
        for(j=1;j<=n;j++)
		{
			l=sz[i]+sz[j];
			if(l==k)
			{
				h=1;
				break;
			};
		};
	}
	if(h==1)
	{ my_printf("yes");}
	else
	{my_printf("no");}
	return 0;
}