#define NUM_ITER 533

#include <header.h>

int main_bench()
{	
	int m,n,w,q,j,i,e,sz[100][100],sz1[100],sz2[100],x=0,y=0;	
	my_scanf("%d %d",&m,&n);	
	for(i=0;i<m;i++)
	{	
		for(j=0;j<n;j++)
		{	
			my_scanf("%d",&sz[i][j]);	 
		}	
	}	
	for(q=0;q<m;q++)
	{	 
		for(w=0;w<n;w++)
		{	
			if(sz[q][w]>=sz[q-1>0?q-1:0][w]&&sz[q][w]>=sz[q+1][w]&&sz[q][w]>=sz[q][w-1>0?w-1:0]&&sz[q][w]>=sz[q][w+1])
			{	
				my_printf("%d %d\n",q,w);	
			}	
		}	
	}	
	return 0;
} 