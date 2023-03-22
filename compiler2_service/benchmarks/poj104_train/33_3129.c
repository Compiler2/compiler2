#define NUM_ITER 28725

#include <header.h>

int main_bench(){
    int n,i,j;
	char q[256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",&q);
		for(j=0;q[j]!='\0';j++){
     		if(q[j]=='A'){
                my_printf("T");
            }else{
				if(q[j]=='T'){
					my_printf("A");
				}else{
					if(q[j]=='C'){
						my_printf("G");
					}else{
						if(q[j]=='G'){
							my_printf("C");
						}
					}
				}
			}
		}
		my_printf("\n");
	}
    return 0;
}