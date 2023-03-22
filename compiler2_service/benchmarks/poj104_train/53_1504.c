#define NUM_ITER 9949

#include <header.h>


int main_bench()
{
	int Set[300] = {0};
	int n = 0;
	int i = 0, j = 0, p = 0;
	my_scanf("%d", &n);
	for ( i = 0; i < n; i++ )
	{
		my_scanf( "%d", &Set[p] );
		for ( j = 0; j < p; j++ )
		{
			if ( Set[j] == Set[p] )
				break;
		}
		if ( j == p )
			p++;
	}
	if ( p != 0 )
		my_printf("%d", Set[0]);
	for ( i = 1; i < p; i++ )
	{
		my_printf( ",%d", Set[i] );
	}
	return 0;
}