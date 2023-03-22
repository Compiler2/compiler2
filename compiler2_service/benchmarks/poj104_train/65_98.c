#define NUM_ITER 35366

#include <header.h>

int main_bench(){
    int n;
	int r[200],e[200];
	int i,a=0,b=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&r[i],&e[i]);
		if((r[i]==0&&e[i]==1)||(r[i]==1&&e[i]==2)||(r[i]==2&&e[i]==0)){
			a++;}
    else if((e[i]==0&&r[i]==1)||(e[i]==1&&r[i]==2)||(e[i]==2&&r[i]==0)){
			b++;}
	}
	if(a>b){my_printf("A");};
	if(a<b){my_printf("B");};
	if(a==b){my_printf("Tie");};
	return 0;
}