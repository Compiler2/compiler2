#define NUM_ITER 23629

#include <header.h>

int main_bench(){
	int n,i,j,e;
	char jianji[256]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",jianji);
		e=strlen(jianji);
		for(j=0;j<e;j++){
			if(jianji[j]=='A'){
				my_printf("T");
			}else if(jianji[j]=='G'){
				my_printf("C");
			}else if(jianji[j]=='C'){
				my_printf("G");
			}else{
				my_printf("A");
			}
		}
		my_printf("\n");
	}
	return 0;
}

