#define NUM_ITER 1798630

#include <header.h>


int main_bench( )
{
int n , t1 = 0 , t2 = 0 , t3 = 0 , t4 = 0 , t5 = 0 , t6 = 0 ;
my_scanf( "%d" , &n );
while( n >= 100 )
{
n -= 100 ;
t1 ++ ;
}
while( n >= 50 )
{
n -= 50 ;
t2 ++ ;
}
while( n >= 20 )
{
n -= 20 ;
t3 ++ ;
}
while( n >= 10 )
{
n -= 10 ;
t4 ++ ;
}
while( n >= 5 )
{
n -= 5 ;
t5 ++ ;
}
while( n >= 1 )
{
n -= 1 ;
t6 ++ ;
}
my_printf( "%d\n%d\n%d\n%d\n%d\n%d\n" , t1 ,t2 ,t3 ,t4, t5, t6 );
}