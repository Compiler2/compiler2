#define NUM_ITER 46795

#include <header.h>


void reverse(int* array, int len){
	int i = 0, j = len - 1;
	while( i < j ){
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;
		j--;
	}
}

int main_bench(){
	int len = 0;
	my_scanf("%d", &len);

	int * array = (int*)malloc(len * sizeof(int));
	int i = 0;
	while( i < len){
		my_scanf("%d", array + i);
		i++;
	}
	reverse(array, len);

	i = 0;
	while( i < len - 1 ){
		my_printf("%d ", array[i]);
		i++;
	}
        my_printf("%d", array[i]);

	return 0;
}
