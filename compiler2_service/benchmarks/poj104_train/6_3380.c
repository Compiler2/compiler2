#define NUM_ITER 30

#include <header.h>

int main_bench()
{
	int sz[100][100];
	int k,i;
	my_scanf("%d",&k);
	for(i=1;i<=k;i++){
		int m,n,a,b,sp=0;
		my_scanf("%d%d",&m,&n);
		for(a=0;a<=m-1;a++){
			for(b=0;b<=n-1;b++){
				my_scanf("%d",&(sz[a][b]));
				sp=sp+sz[a][b];
			}
		}
		int sum=0;
		for(b=0;b<=n-1;b++){
			sum=sum+sz[0][b]+sz[m-1][b];
		}
		for(a=0;a<=m-1;a++){
			sum=sum+sz[a][0]+sz[a][n-1];
		}
		sum=sum-sz[0][0]-sz[0][n-1]-sz[m-1][0]-sz[m-1][n-1];
		if(m==1||n==1){
			sum=sp;
		}
		my_printf("%d\n",sum);
	}
	return 0;
}