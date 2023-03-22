#include <header.h>


int main_bench()
{
int len1, len2 , i , count = 0 , error = 0 ;
double line ;
char str1[ 600 ] , str2[ 600 ] ;
my_scanf( "%lf" , &line );
my_scanf( "%s" , str1 );
my_scanf( "%s" , str2 );

len1 = strlen( str1 );
len2 = strlen( str2 );

if( len1 != len2 )
{
my_printf( "error\n" );
return ;
}

for( i = 0 ; i < len1 ; i ++ )
{
if( str1[ i ] != 'A' && str1[ i ] != 'C' && str1[ i ] != 'G' && str1[ i ] != 'T' )
error ++ ;
if( str2[ i ] != 'A' && str2[ i ] != 'C' && str2[ i ] != 'G' && str2[ i ] != 'T' )
error ++ ;

if( str1[ i ] != str2[ i ] )
count ++ ;
}

if( error )
my_printf( "error\n" );
else
{
if( (double)(len1 - count)/len1 > line )
my_printf( "yes\n" );
else
my_printf( "no\n" );
}

}