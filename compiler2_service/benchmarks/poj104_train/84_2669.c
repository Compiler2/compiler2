#define NUM_ITER 54983

#include <header.h>

int main_bench(){
int n;
int e;
int i;
int sz[100];
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d",&(sz[i]));
}
if(n==2){
	if(sz[0]<sz[1]){
		e=sz[1];
		sz[1]=sz[0];
		sz[0]=e;
	}
}
	for(i=2;i<n;i++){
		if(sz[0]<sz[1]){
		e=sz[1];
		sz[1]=sz[0];
		sz[0]=e;
		}
		if(sz[i]>sz[0]){
			e=sz[0];
			sz[0]=sz[i];
			sz[1]=e;
		}else if((sz[0]>sz[i])&&(sz[i]>sz[1])){
			sz[1]=sz[i];
		}
	}
my_printf("%d\n%d\n",sz[0],sz[1]);
return 0;
	}
	