#define NUM_ITER 16033

#include <header.h>

int main_bench()
{
	int n,i,e;
	int s=0;
	int a=0;
	my_scanf("%d",&n);
	int **sz=(int**)malloc(sizeof(int*)*n);
	int *sf=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		sz[i]=(int*)malloc(sizeof(int)*2);
		my_scanf("%d %d",&sz[i][0],&sz[i][1]);
	}
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
				if(sz[i][0]>=90&&sz[i][0]<=140&&sz[i][1]>=60&&sz[i][1]<=90)
			{
				s++;
			}
			else
			{
				sf[a]=s;
				a++;
				s=0;
			}
		}
		if(i==n-1)
		{
				if(sz[i][0]>=90&&sz[i][0]<=140&&sz[i][1]>=60&&sz[i][1]<=90)
			{
				s++;
				sf[a]=s;
				a++;
			}
			else
			{
				sf[a]=s;
				a++;
			}
		}

	}
	
	for(i=0;i<a-1;i++)
	{
		if(sf[i]>sf[i+1])
		{
			e=sf[i];
			sf[i]=sf[i+1];
			sf[i+1]=e;
		}
	}
	my_printf("%d",sf[a-1]);
	return 0;
}