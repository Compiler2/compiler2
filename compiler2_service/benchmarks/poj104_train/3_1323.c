#include <header.h>


int main_bench()
{
	int n,m,i,j,k,p=0;
	my_scanf("%d%d",&n,&m);
	int sz[1000],pl[1000],a;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
		pl[i]=sz[i];
	}
	
	for(k=0;k<n;k++)
	{
	     for(j=1;j<n;j++)
		 {
			a=pl[k]+sz[j];
			if(a!=m)
			{
		          p++;
			}
		 }
	}
	if(p==n*(n-1))
	{
		my_printf("no");
	}
	else
	{
		my_printf("yes");
	}

	
	return 0;
}

