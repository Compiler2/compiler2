#define NUM_ITER 32

#include <header.h>


int main_bench()
{
	int k,m,n,sum,i,j;
	int jz[100][100];
	my_scanf("%d",&k);
	for(;k>0;k--){
		my_scanf("%d%d",&m,&n);
		sum=0;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++)
				my_scanf("%d",&jz[i][j]);
		}
		for(i=0;i<m;i++)
			sum+=(jz[i][0]+jz[i][n-1]);
		for(i=0;i<n;i++)
			sum+=(jz[0][i]+jz[m-1][i]);
		sum-=(jz[0][0]+jz[m-1][n-1]+jz[0][n-1]+jz[m-1][0]);
		my_printf("%d\n",sum);
	}

}