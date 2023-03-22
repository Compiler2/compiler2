#include <header.h>


int main_bench()
{
	int n, k, i, j, num[1000];
	my_scanf("%d %d", &n, &k);
	for(i = 0; i < n; i++){
		my_scanf("%d", &num[i]);
	}
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(num[i] + num[j] == k){
				n = 0;
				break;
			}
		}
		if(n == 0){
			my_printf("yes\n");
			break;
		}
	}
	if(n != 0){
		my_printf("no\n");
	}
	return 0;
}
