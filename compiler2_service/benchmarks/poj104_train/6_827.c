#define NUM_ITER 28

#include <header.h>

int main_bench()
{
	int k,a[100][100][100],b[100][2],s[100],i,j,l,x,y;
	my_scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		my_scanf("%d%d",&b[i][0],&b[i][1]);
        x=b[i][0];
		y=b[i][1];
		s[i]=0;
		for(j=0;j<x;j++)
		{
			for(l=0;l<y;l++)
			{
				my_scanf("%d",&a[j][l][i]);
				if(j==0||l==0||j==x-1||l==y-1)
					s[i]+=a[j][l][i];
			}
		}
		
	}
	for(i=0;i<k;i++)
		my_printf("%d\n",s[i]);
	return 0;
}