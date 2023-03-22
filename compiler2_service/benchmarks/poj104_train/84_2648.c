#define NUM_ITER 2706

#include <header.h>

int main_bench()
{
	int i,j,k,t,m,sz[101]={0};
	my_scanf("%d",&i);
	for(m=0;m<i;m++){
		my_scanf("%d",&sz[m]);
	}
	for(j=0;j<101;j++){
		for(k=0;k<101;k++){
			if(sz[k]<sz[k+1]){
				t=sz[k];
				sz[k]=sz[k+1];
				sz[k+1]=t;
			}
		}
	}
	my_printf("%d\n%d\n",sz[0],sz[1]);
	return 0;
}
	