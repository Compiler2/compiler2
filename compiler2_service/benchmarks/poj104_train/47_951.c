#include <header.h>

int main_bench(){
	int n,i,j;
	my_scanf("%d",&n);
	int order[10000]={0};
	for(i=0;i<n;i++){
		
		my_scanf("%d",&order[i]);
		
	}
	
	for(j=n-1;j>-1;j--){
		if(j>0){
		my_printf("%d ",order[j]);
		}else{
		my_printf("%d",order[j]);
		}
		
		
		
	}
	return 0;
}