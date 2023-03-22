#define NUM_ITER 1310480

#include <header.h>

int main_bench()
{
	int a[10],n,flag;
	flag = 0;
	my_scanf("%d",&n);
	if(n == 0) my_printf("0");
	else{
		while(n != 0){
			flag ++;
			a[flag] = n % 10;
			n = n / 10;
		}
		for(int i = 1;i <= flag;i ++){
			my_printf("%d",a[i]);
		}
	}
	return 0;
}