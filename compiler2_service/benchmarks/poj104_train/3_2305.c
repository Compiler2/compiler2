#include <header.h>


int main_bench(){
	int sz[1000];
	int n,k,i,t,l;
	
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	t=0;
	while(t<n){
		l=1;
		while(l<n){
			if(sz[t]+sz[l]==k){
				my_printf("yes");
				l++;
				break;}
			else{l++;}
		}
		
		if(sz[t]+sz[l-1]==k){
			break;}	
		t++;	
	}

	if(t==n){
		my_printf("no");}

return 0;
	}
	