#define NUM_ITER 29692

#include <header.h>


int main_bench()
{
int a , b , n , i , str[ 120 ] = { 0 } ;
my_scanf( "%d" , &n );
for( i = 1 ; i <= n ; i ++ )
{
my_scanf( "%d %d" , &a , &b );
if( a >= 90 && a <= 140 && b >= 60 && b <= 90 )
str[ i ] = 1 ;
}

for( i = 1 ; i <= n ; i ++ )
if( str[ i ] == 1 )
str[ i ] = str[ i - 1 ] + 1 ;

a = 0 ;
for( i = 1 ; i <= n ; i ++ )
if( str[ i ] > a )
a = str[ i ];

my_printf( "%d\n" , a);
}