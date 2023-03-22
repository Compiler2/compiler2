#include <header.h>

int main_bench()
{
	int n,k,s;
	int i,a;
	my_scanf("%d",&n);
	s=0;
	int*sz=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		while(sz[i]==k)
		{
			for(a=i;a<n;a++)
			{
				sz[a]=sz[a+1];
			}
			s++;
		}
	}
	for(i=0;i<n-s;i++)
	{
		if(i==0)
		my_printf("%d",sz[i]);
		else if(i!=0)
			my_printf(" %d",sz[i]);
	}
	free(sz);
return 0;
}

