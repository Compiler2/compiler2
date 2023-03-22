#define NUM_ITER 32

#include <header.h>

int main_bench()
{
    int k,m,n,sz[200][200],result=0;
	my_scanf("%d",&k);
	int i,p,q;
	for (i=0;i<k;i++)
	{
		my_scanf("%d%d",&m,&n);
		for (p=0;p<m;p++)
		{
			for (q=0;q<n;q++)
			{
				my_scanf("%d",&sz[p][q]);
			}
			if(p==0||p==m-1)
			{
                for (q=0;q<n;q++)
				{
                 result+=sz[p][q];
				}}
			else 
			{
				result+=sz[p][0];
				result+=sz[p][n-1];
			}
		}
        my_printf("%d\n",result);
		result=0;
	}
	return 0;
}