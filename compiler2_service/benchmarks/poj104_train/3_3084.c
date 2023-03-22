#define NUM_ITER 2961

#include <header.h>

int main_bench(){
	int n,k,i,s[1000],z[1000],j,g=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++){
		z[i]=s[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[i]!=z[j]&&s[i]+z[j]==k){
			g+=1;	
			}
		
	}
	}
	if(g>0){
		my_printf("yes");
	}
	else{
		my_printf("no");
	}
	return 0;
}

