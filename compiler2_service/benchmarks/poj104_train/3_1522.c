#include <header.h>

int main_bench(){
	int i,m=0,k,n,sz[1000],s[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
		s[m]=sz[i];
	    m++;}
    for(i=0;i<n;i++){
		if(i==n-1){
			break;}
		for(m=n-1;m>=i+1;m--){
			if(s[m]+sz[i]==k){
			my_printf("yes");
			break;
			}
		}
            if(s[m]+sz[i]==k){
				break;}
	}
	    if(i==n-1){
	    	my_printf("no");
		}
	return 0;
}

