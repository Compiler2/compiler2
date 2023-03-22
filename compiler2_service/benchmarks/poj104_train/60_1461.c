#define NUM_ITER 37980

#include <header.h>


int su ( int x2 )
{
   int i ,x;
   x = x2/2;
   for ( i = 3 ; i < x ; i ++ )
    if ( x2 % i == 0 )
     return 0;
   return 1;
}

int main_bench()
{
   int n , i , f=1 , x1=3 , x2=5;
   my_scanf ( "%d" , &n );
   for ( ; x1 < n ; x1 = x2 )
    for ( x2 = x1 + 2 ; x2 <= n ; x2 += 2 )
     if ( su (x2) )
      {
       if ( x2 == x1 + 2 )
        { my_printf ( "%d %d\n" , x1 , x2 ); f = 0; }
       break;
      }
   if ( f )
    my_printf ( "empty" );
  
   return 0;
}
