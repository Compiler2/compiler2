#define NUM_ITER 12309

#include <header.h>



int com( const void * a , const void * b )
{
	double a1 = *(double*) a;
	double a2 = *(double*) b;

	if( a1 > a2 )
		return 1;
	else 
		return 0;
}

int main_bench()
{
	int i , j , k , r , ren , max , i_nan , i_nv ;
	char c;
	double nan[200];
	double nv[200];

	my_scanf( "%d" , &ren );
	getchar();

	i_nan = i_nv = 0;
	for( i = 0 ; i < ren ; i++ ){
		for( j = 0 ; j < 4 ; j++ ){
			c = getchar();
		}

		if( c == 'e' ){
			getchar();
			my_scanf( "%lf" , &nan[i_nan++] );
			getchar();
		}

		else{
			for( k = 0 ; k < 3 ; k++ )
				getchar();
			my_scanf( "%lf" , &nv[i_nv++] );
			getchar();
		}
	}

	qsort( (void*)nan , i_nan , sizeof( nan[0] ) , com  );
	qsort( (void*)nv , i_nv , sizeof( nv[0] ) , com  );

	for( i = 0 ; i < i_nan ; i++ ){
		my_printf( "%.2lf" , nan[i] );
		my_printf( " " );
	}
	for( j = i_nv-1 ; j >= 0 ; j-- ){
		my_printf( "%.2lf" , nv[j] );
		if( j != 0 )
			my_printf( " " );
		else
			my_printf( "\n" );
	}

	return 0;
}