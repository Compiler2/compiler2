#define NUM_ITER 1210

#include <header.h>



int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
	int i,m,j,k;
	int *save;
	for(i=0;i<n;i++)
	{
		sz[i]=0;
		my_scanf("%d",&m);
		if(m==0)
		{
			sz[i]=60;
			continue;
		}
		save=(int*)malloc(sizeof(int)*m);
		for(j=0;j<m;j++)
		{
			my_scanf("%d",&save[j]);
		}
		for(j=0;j<m;j++)
		{
			k=save[j]+3*j;
			if(k>=60)
			{
				sz[i]=60-3*j;
				break;
			}
			if(k<60 && k>=57)
			{
				sz[i]=k-3*j;
				break;
			}
		}
		if(sz[i]==0)
		{
			sz[i]=60-3*m;
		}
	}
	for(i=0;i<n;i++)
	{
		my_printf("%d\n",sz[i]);
	}
	free(sz);
	free(save);
	return 0;
}
