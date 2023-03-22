#include <header.h>

int main_bench()
{
	int k,n,i,m,p,q,sz[100][100],sum;
	my_scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		sum=0;
		my_scanf("%d%d",&m,&n);
		for(p=0;p<m;p++)
		{
			for(q=0;q<n;q++)
			{
				my_scanf("%d",&sz[p][q]);
			}
		}
		if(m==1||n==1)
		{
			for(p=0;p<m;p++)
			{
		 	    for(q=0;q<n;q++)
				{
				   sum+=sz[p][q];
				}
			}
		}
		else
        {
		   for(q=0;q<=n-1;q++)
		   {
		  	  sum+=sz[0][q];
		   }
           for(q=1;q<m-1;q++)
		   {
			  sum+=sz[q][n-1];
		   }
           for(q=0;q<n;q++)
		   {
			  sum+=sz[m-1][q];
		   }
           for(q=1;q<m-1;q++)
		   {
			  sum+=sz[q][0];
		   }
		}
	    my_printf("%d\n",sum);
	}
	return 0;
}

