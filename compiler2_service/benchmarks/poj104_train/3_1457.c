#include <header.h>

int main_bench()
{
	int n,k,a=1,i,j;
	int sz[1000];
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sz[i]+sz[j]==k){	
				a=0;
				
				
			}
		}
	}
	while(a==0){
		my_printf("yes");
		break;
	}

	while(a){
		my_printf("no");
		break;
	}
	return 0;
}
