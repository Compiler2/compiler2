#define NUM_ITER 48138

#include <header.h>

int main_bench(){
	int i,n;
	 
	int sz[100],e,y=0;
my_scanf("%d",&n);
	for (i = 0; i < n;i++){
		
		my_scanf("%d",&sz[i]);
	}
	
	for(i=0;i<n;i++){
		if(sz[i]>=sz[y]){
			y=i;

		}
	}
	if(y!=0){
		e=sz[y];
		sz[y]=sz[0];
		sz[0]=e;
	}
	int x=1,t,m;
	for(m=1;m<n;m++){
		if(sz[m]>=sz[x]){
			x=m;
		}
	}
	if(x!=1){
		t=sz[x];
		sz[x]=sz[1];
		sz[1]=t;
	}
	my_printf("%d\n",sz[0]);
	my_printf("%d\n",sz[1]);
	return 0;
}