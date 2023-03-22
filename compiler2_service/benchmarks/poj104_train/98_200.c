#define NUM_ITER 32263

#include <header.h>


int main_bench(){
	char word[41];
	int n, cnt, len;

	my_scanf("%d", &n);
	cnt = 0;
	while (n--){
		my_scanf("%s", word);
		len = strlen(word);
		if (cnt == 0){
			my_printf("%s", word);
			cnt = len;
		}else if (cnt + len < 80){
			my_printf(" %s", word);
			cnt += len + 1;
		}else{
			my_printf("\n%s", word);
			cnt = len;
		}
	}

	return 0;
}