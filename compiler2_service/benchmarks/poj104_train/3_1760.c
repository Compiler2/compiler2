#include <header.h>

int main_bench(){
	int n,k;
	my_scanf("%d %d",&n,&k);
	int sz[1000];
	int i;
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	int j,e,a;
	for(j=1;j<n;j++){
		for(i=0;i<n-j;i++){
			if(sz[i]>sz[i+1]){
				e = sz[i];
				sz[i] = sz[i+1];
				sz[i+1] = e;
			}
		}
	}
	a = 0;
	if(sz[n-1]+sz[n-2]<k){
		my_printf("no");
	} else {
		if(sz[0]+sz[1]>k){
			my_printf("no");
		} else {
			for(i=0;i<n-1;i++){
				for(j=i+1;j<n;j++){
					if(sz[i]+sz[j]==k){
						my_printf("yes");
						a = 1;
						break;
					}
				}
				if(a==1){
					break;
				}
			}
			if(a==0){
				my_printf("no");
			}
		}
	}
	return 0;
}