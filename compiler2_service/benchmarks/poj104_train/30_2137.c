#define NUM_ITER 54155

#include <header.h>

int yu7WuGuan(int number){
		if(number%7 == 0){
			return 0;
		}
		for(int num = number; num > 0; num /= 10){
			if (num%10 == 7){
				return 0;
			}
		}
		return 1;
	}


int main_bench(){
		int num, result = 0;
		my_scanf("%d", &num);

		for(int i = 1; i <= num; i++){
			if(yu7WuGuan(i)){
				result += i*i;
			}
		}

		my_printf("%d", result);
		return 0;
}