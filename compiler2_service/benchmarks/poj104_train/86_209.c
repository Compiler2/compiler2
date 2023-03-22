#define NUM_ITER 1149

#include <header.h>

int main_bench()
{
	int n, cs[999], num[99], result = 60;
	int i, j;
	my_scanf("%d", &n);
	for(i = 0; i < n; i++){
		my_scanf("%d", &cs[i]);
		for(j = 0; j < cs[i]; j++){
			my_scanf("%d", &num[j]);
			if(num[j] < (result - 3)){
				result -= 3;
			}
else if(num[j] >= (result - 3) && num[j] < result){
				result = num[j];
			}
		}
		cs[i] = result;
		result = 60;
	}
	for(i = 0; i < n; i++){
		my_printf("%d\n", cs[i]);
	}
	return 0;
}

