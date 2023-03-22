#include <header.h>

int main_bench()
{
	int n, sz[1000], k, j, i, m;
	my_scanf("%d %d", &n, &k);
	for(i=0;i<n;i++){
		if(i==0){
			my_scanf("%d", &sz[i]);
		}else{
		my_scanf(" %d", &sz[i]);
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sz[i]+sz[j]==k){
				my_printf("yes");
				m=1;
				break;
			}
		}if(m==1){
		break;
		}
	}if(m!=1){
	my_printf("no");
	}
     return 0;
}