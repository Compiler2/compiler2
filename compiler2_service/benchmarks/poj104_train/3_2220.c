#include <header.h>

int main_bench()
{
	int n,k,m,e=0,sz[1000];
	my_scanf("%d %d\n",&n,&k);
	for(int i=0;i<n-1;i++){
		my_scanf("%d ",&(sz[i]));
	}
    my_scanf("%d",&(sz[n-1]));
	for(int j=0;j<n;j++){
		m=sz[j];
		sz[j]=sz[0];
		sz[0]=m;
		for(int p=1;p<n;p++){
			if(sz[j]+sz[p]==k){
				e=1;
			}
		}
	}
	if(e==0){
		my_printf("no");
	}
	else if(e==1){
		my_printf("yes");
	}
return 0;
}
