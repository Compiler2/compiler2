#include <header.h>

int main_bench (){
	int a,b,c,n,i,sz[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&(sz[i]));
	}
	for(i=n-1;i>0;i--){
		my_printf("%d ",sz[i]);
	}
	if(i==0){
		my_printf("%d",sz[i]);
	}
        return 0;
}