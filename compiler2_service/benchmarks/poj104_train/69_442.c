#define NUM_ITER 729770

#include <header.h>


char a1[252] , b1[252];
int a[252] , b[252] , la , lb , l;

int main_bench()
{
   gets (a1); gets (b1);
   la = strlen (a1) , lb = strlen (b1) , l = la > lb ? la : lb;
   int i;
   for ( i = 0 ; i < la ; i ++ )
    a[la-i-1] = a1[i] - '0';
   for ( i = 0 ; i < lb ; i ++ )
    b[lb-i-1] = b1[i] - '0';
   for ( i = 0 ; i < l ; i ++ )
    a[i] += b[i] , a[i+1] += a[i] / 10 , a[i] %= 10;
   for ( ; a[l] == 0 && l >= 0 ; l -- );
   l ++;
   if ( l <= 0 )  l = 1;
   for ( i = l-1 ; i >= 0 ; i -- )
    my_printf ( "%d" , a[i] );
  
   return 0;
}