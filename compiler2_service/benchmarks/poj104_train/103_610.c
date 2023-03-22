#define NUM_ITER 1378434

#include <header.h>


int main_bench()
{
   char a[5000] , t;
   int la , i , j;
   my_scanf ( "%s" , a );
   la = strlen ( a );
   for ( i = 0 ; i < la ; i ++ )
    if ( 'a' <= a[i] && a[i] <= 'z' )
     a[i] = a[i] - 'a' + 'A';
   for ( i = 0 ; i < la ; )
    {
     t = a[i++] , j = 1;
     for ( ; a[i] == t ; i ++ , j ++ );
     my_printf ( "(%c,%d)" , t , j );
    }
  
   return 0;
}
