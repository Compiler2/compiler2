#define NUM_ITER 2953

#include <header.h>

int F(int x){
	int sz[100];
	int i;
	sz[0]=1;
	sz[1]=1;
	for(i=2;i<100;i++){
		sz[i]=sz[i-1]+sz[i-2];
	}
	return sz[x-1];
}
	int main_bench(){
		int n;
		int i;
		int sa[100];
		my_scanf("%d",&n);
		for(i=0;i<n;i++){
			my_scanf("%d",&sa[i]);
		my_printf("%d\n",F(sa[i]));
		}
	return 0;
}
