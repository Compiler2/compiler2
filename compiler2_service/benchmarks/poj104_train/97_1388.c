#define NUM_ITER 928230

#include <header.h>

int main_bench(){
	int n,a,b,c,d,e,f,i;
    int sz[6]={100,50,20,10,5,1};
	my_scanf("%d",&n);
	for(i=0;i<6;i++){
		my_printf("%d\n",n/sz[i]);
		n=n%sz[i];
	}

	return 0;
}
