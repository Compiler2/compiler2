#include <header.h>

int main_bench()
{
	int n,a,i,j,sz[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a);
		if(a==1||a==2)
		{
			sz[a-1]=1;
		}
		else
		{				
			for(j=2;j<a;j++)
			{
				sz[0]=1;
				sz[1]=1;
				sz[j]=sz[j-2]+sz[j-1];
			}	
		}	
		my_printf("%d\n",sz[a-1]);
	}
	return 0;
}
