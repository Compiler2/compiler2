#include <header.h>

int main_bench(){
	int i,j,n=0,l,t=0;
	my_scanf("%d",&l);
	for(i=3;i<=l-2;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				n=1;
				break;
			}
			else{
				if((i+2)%j==0){
					n=1;
					break;
				}
			}
        }
		if(n==0){
			my_printf("%d %d\n",i,i+2);
            t=1;
		}
		n=0;

		
	}
	if(t==0){
		my_printf("empty");
	}
}