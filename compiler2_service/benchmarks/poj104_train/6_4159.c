#define NUM_ITER 32

#include <header.h>

int main_bench(){
	int k,i,m,n,a,b,sz[1000][1000],s=0;
	my_scanf("%d",&k);
	for(i=0;i<k;i++){
		my_scanf("%d%d",&m,&n);
		for(a=0;a<m;a++){
			for(b=0;b<n;b++){
				my_scanf("%d",&sz[a][b]);
			}
		}
		for(b=0;b<n;b++){
			s+=(sz[0][b]+sz[m-1][b]);
		}
		for(a=0;a<m;a++){
			s+=(sz[a][0]+sz[a][n-1]);
		}
		s-=(sz[0][0]+sz[m-1][0]+sz[0][n-1]+sz[m-1][n-1]);
		my_printf("%d\n",s);
		s=0;
	}
	return 0;
}