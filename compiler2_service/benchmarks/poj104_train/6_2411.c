#define NUM_ITER 26

#include <header.h>

int main_bench()
{
	int k,i,j,p,ans=0;
	int m[100],n[100];
	int r[100][100][100];
	my_scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		my_scanf("%d%d",&m[i],&n[i]);
		for(j=0;j<m[i];j++)
		{
			for(p=0;p<n[i];p++)
				my_scanf("%d",&r[i][j][p]);
		}
	}
	for(p=0;p<k;p++)
	{
	    ans=0;
		for(i=0;i<n[p];i++)
		{
	    	for(j=0;j<m[p];j++)
			{
	    		if((i==0)||(i==n[p]-1)||(j==0)||(j==m[p]-1))
	    			ans+=r[p][j][i];
				else
					continue;
			}
		}
	    my_printf("%d\n",ans);
	}
	return 0;
}