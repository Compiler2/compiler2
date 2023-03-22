#define NUM_ITER 45736

#include <header.h>


int main_bench(){
	int count, sentry = 0;
	int * values;
	int i, sum = 0;
	double ave, temp, distance = 0;
	int * mid;

	my_scanf ( " %d ", &count );
	values = ( int * )malloc( count * sizeof(int) );
	mid = ( int * )malloc( count * sizeof(int) );
	for ( i = 0; i < count; i++ ){
		my_scanf ( "%d", (values + i) );
		sum += *( values + i );
	}
	
	ave = 1.0 * sum / count;
	
	for ( i = 0; i < count; i++ ){
		temp = fabs( 1.0 * values[i] - ave );
		if ( temp > distance ){
			distance = temp;
			mid[0] = values[i];
			sentry = 0;
		}
		else if ( temp == distance ){
			sentry++;
			mid[sentry] = values[i];
		}
	}

	
	my_printf( "%d", mid[0] );


	for ( i = 1; i <= sentry; i++ ){
		my_printf( ",%d", mid[i]);
	}
	return 0;
}
