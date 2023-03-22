#define NUM_ITER 10701

#include <header.h>

int main_bench() {
	int a,b,c,d,e,f;
	int t;
	my_scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
	while(a!=0){
		t=(60-c)+((60-b-1)*60)+((12+d-1-a)*60*60)+(e*60)+f;
		my_printf("%d\n",t);
		my_scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}
