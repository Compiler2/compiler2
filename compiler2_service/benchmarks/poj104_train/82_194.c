#define NUM_ITER 6351

#include <header.h>

int main_bench()
{
	int sz[100];
	int g,d,n,i,k=0,j,q;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		sz[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&g,&d);
		if(g>=90&&g<=140&&d>=60&&d<=90)
		{
			sz[k]=sz[k]+1;
		}
		else
		{
			k=k+1;
		}
	}
	int e;
	for(q=1;q<k+1;q++)
	{
		for(j=0;j<k+1-q;j++)
		{
			if(sz[j]<sz[j+1])
			{
				e=sz[j+1];                                                                       
				sz[j+1]=sz[j];
				sz[j]=e;
			}
		}
	}
	my_printf("%d",sz[0]);
	return 0;
}

