#define NUM_ITER 58587

#include <header.h>


int main_bench(){
	int n, i=1, max=0, max2=0, a;
	my_scanf("%d", &n);
	for (i=1; i<=n; i++){
		my_scanf("%d", &a);
		if (a>=max){
			max2=max;
			max=a;
			continue;
		}
		else if((a<max)&&(a>=max2)){
			max2=a;
			continue;
		}
		else continue;
	}
	my_printf("%d\n%d\n",max,max2);
	return 0;
}