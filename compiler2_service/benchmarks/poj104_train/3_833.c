#include <header.h>

int main_bench(){
	int n,k;
	my_scanf("%d",&n);
	my_scanf("%d",&k);
	int sz[1001];
	for(int i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	int bar=0;
	for(int a=0;a<n;a++){
		for(int b=a+1;b<n;b++){
			if(sz[a]+sz[b]==k)
				bar=1;
		}
	}
	if(bar==1)
		my_printf("yes");
	if(bar==0)
		my_printf("no");
	return 0;
}
