#include <header.h>

int main_bench(){
	int sz[3]={3,5,7};
	int n;
	my_scanf("%d",&n);
	int i;
	int flag=0;
	int isfirsttime=1;

	for(i=0;i<3;i++){
			if(n%sz[i]==0){
				if(!isfirsttime){
				my_printf(" %d",sz[i]);
				flag=1;
				}else{
					my_printf("%d",sz[i]);
					flag=1;
					isfirsttime=0;

				}

			}
	


	}
	if(flag==0){
		my_printf("n");
	}
	return 0;
}
