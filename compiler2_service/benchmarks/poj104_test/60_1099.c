#include <header.h>

int main_bench(){
	int n,i,j,s=2,count=0;
	my_scanf("%d",&n);
	for(i=3;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;	
			}
		}	
		if(j==i){
			count++;
			if((i-s)==2){
				my_printf("%d %d\n",s,i);	
			}	
			s=i;
		}
	}	
	if((count==0)||n==3||n==4){
		my_printf("empty");	
	}
	return 0;
}