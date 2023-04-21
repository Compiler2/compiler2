#define NUM_ITER 17175

#include <header.h>

int main_bench()
{
	int n,k;
	int i,j,p=1;
	int num[1000];
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&num[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n-i;j++){
			if(num[i]+num[j]==k){
			p=0;
			}
		}
	}
	if(p==0){
		my_printf("yes\n");
	}
	else if(p=1){
		my_printf("no\n");
	}
	return 0;
}

