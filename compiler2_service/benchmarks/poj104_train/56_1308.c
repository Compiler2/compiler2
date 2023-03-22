#include <header.h>


int main_bench(){
	char str[5];
	int i, count;

	my_scanf( "%s", str );

	count = strlen(str);
	for ( i = count - 1; i >= 0; i-- ){
		my_printf( "%c", str[i] );
	}
	
	return 0;

}