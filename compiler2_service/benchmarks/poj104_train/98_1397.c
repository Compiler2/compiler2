#define NUM_ITER 35839

#include <header.h>

int main_bench(){
	int n,i=0,len,L=0;
	char ori[300][42];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",ori[i]);
	}
	my_printf("%s",ori[0]);
	L+=strlen(ori[0]);
	for(i=1;i<n;i++){
		L+=strlen(ori[i])+1;
		if(L>80){
			L=0;
			my_printf("\n%s",ori[i]);
			L+=strlen(ori[i]);
		}else{
			my_printf(" %s",ori[i]);
		}
	}


	return 0;
}