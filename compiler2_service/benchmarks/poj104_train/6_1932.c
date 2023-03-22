#include <header.h>

int main_bench()
{
	int N,m,n,i,M,j,JU[100][100],h,l;
	my_scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		M=0;
		my_scanf("%d %d",&m,&n);
        for(h=0;h<m;h++)
		{
			for(l=0;l<n;l++)
			{my_scanf("%d",&JU[h][l]);}
		}
		if(n==1){for(j=0;j<m;j++) M=M+JU[j][0];}
		else if(m==1){for(j=0;j<n;j++) M=M+JU[0][j];}
		else 
		{
			for(h=0;h<m;h++)
			{
				if(h>0&&h<m-1){M=M+JU[h][0]+JU[h][n-1];}
				else{for(j=0;j<n;j++) M=M+JU[h][j];}
			}
		}
		my_printf("%d\n",M);
	}
	return 0;
}
