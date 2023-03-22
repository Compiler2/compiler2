#define NUM_ITER 49253

#include <header.h>


int main_bench(){
	int len, sum, i, j;
	int * set;
	int value = 0;

	my_scanf( "%d%d", &len, &sum );
	set = ( int* )malloc( len * sizeof(int) );
	for ( i = 0; i < len; i++ ){
		my_scanf( "%d", set + i );
	}
	for ( i = 0; i < len; i++ ){
		value = sum - set[i];
		for ( j = i + 1; j < len; j++ ){
			if ( value == set[j] ){
				my_printf("yes\n");
				return 0;
			}
		}
	}
	my_printf("no\n");
	return 0;
}