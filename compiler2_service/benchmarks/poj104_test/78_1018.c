#define NUM_ITER 85235

#include <header.h>

int main_bench()
{
   int z, q, s, l , i , j , k ;
    for( z = 10; z <= 50 ; z += 10 )
        {for( q = 10 ; q <=50; q += 10 ){ if( z == q ) continue;
            for( s = 10 ; s <= 50; s += 10 ){ if( s == q || s == z )continue;
            
                for( l = 10; l <= 50; l += 10 ){ if( l == s || l == q || l == z )continue;
   
                if( (z + q == s + l) && ( z + l > s + q ) && ( z + s < q )  )
                  {
                   for( i = 50 ; i >= 10 ; i -= 10 )
                   {
                    if( z == i ) my_printf( "z %d\n",z );
                    if( q == i ) my_printf( "q %d\n",q );
                    if( s == i ) my_printf( "s %d\n",s );
                    if( l == i ) my_printf( "l %d\n",l );
                   }                
                  }               
                }
            }
        }
        }
     

}
