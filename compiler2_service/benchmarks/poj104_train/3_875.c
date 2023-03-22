#define NUM_ITER 48611

#include <header.h>

int main_bench()
{
	int n,k,i,j,p=1;
	int sz[1000];
	my_scanf("%d %d\n",&n,&k);
	my_scanf("%d",&sz[0]);
	for(i=1;i<n;i++){
		my_scanf(" %d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(sz[i]+sz[j]==k){
				my_printf("yes");
				return 0;
			}
		}
	}
	my_printf("no");
	return 0;
}
			
