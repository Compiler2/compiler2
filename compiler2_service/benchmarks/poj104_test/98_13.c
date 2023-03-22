#include <header.h>


int main_bench(){
	int i , n , j , l , c = 0;
	char word[100000][20];
	my_scanf( "%d" , &n );
	for(i = 0 ; i <= n - 1 ; i++){
		my_scanf("%s" , word[i]);
	}
	for(i = 0 ; i <= n - 1; i++){
		my_printf("%s" , word[i]);
		l = strlen(word[i]);
		j = strlen(word[i+1]);
		c = c + l + 1;
		
		if( c + j > 80) {
			my_printf("\n");
			c = 0 ;
		}
		else if( i == n - 1 ) my_printf("\n");
		else my_printf(" ");
	}

	return(0);
}
