#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int k,m,n,i,j,l,s;
	int sz[100][100];
	my_scanf("%d",&k);
	int *sf=(int*)malloc(sizeof(int)*k);
	for(i=0;i<k;i++)
	{
		s=0;
		my_scanf("%d %d",&m,&n);
		 for(j=0;j<m;j++)
		 {
			 for(l=0;l<n;l++)
			 {
				 my_scanf("%d",&sz[j][l]);
			 }
		 }
		 if(m==1)
		 {
			 for(l=0;l<n;l++)
			 {
				 s+=sz[0][l];
			 }
		 }
		 else if(n==1)
		 {
			for(j=0;j<m;j++)
			{
				s+=sz[j][0];
			}
		 }
		 else
		 {
			for(j=0;j<m;j++)
			 {
				 s+=sz[j][0]+sz[j][n-1];
			 }
			 for(l=0;l<n;l++)
			 {
				 s+=sz[0][l]+sz[m-1][l];
			 }
			 s=s-sz[0][0]-sz[0][n-1]-sz[m-1][0]-sz[m-1][n-1];
		 }
			 sf[i]=s;
	}
	for(i=0;i<k;i++)
	{
		my_printf("%d\n",sf[i]);
	}
	return 0;
}
