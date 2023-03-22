#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int k,l;
	int m,n,i,j,s1,s2,s3,s4,s;
	int sz[100][100];
	my_scanf("%d",&k);
	int *sf=(int*)malloc((sizeof(int)*k));
	for(l=0;l<k;l++)
	{		
		s1=0;
		s2=0;
		s3=0;
		s4=0;
		s=0; 
		my_scanf("%d %d",&m,&n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				my_scanf("%d",&sz[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			s1+=sz[i][0];
			s2+=sz[i][n-1];
		}
		for(j=0;j<n;j++)
		{
			s3+=sz[0][j];
			s4+=sz[m-1][j];
		}
		s+=s1+s2+s3+s4-sz[0][0]-sz[0][n-1]-sz[m-1][0]-sz[m-1][n-1];
	    sf[l]=s;
	}
	for(l=0;l<k;l++)
	{
		my_printf("%d\n",sf[l]);
	}
	return 0;
}