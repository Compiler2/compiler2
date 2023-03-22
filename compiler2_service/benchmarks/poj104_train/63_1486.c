#define NUM_ITER 64

#include <header.h>

int main_bench()
{
     int i ,j, height, a[ 101 ][101] , b[101][101], c[101][101] ,k,l;
     int a1 ,a2, b1 , b2;
     my_scanf( "%d %d",&a1 ,&a2 );
     for( i = 1; i <= a1; i ++ )
        { for( j = 1; j <= a2; j ++ )
         my_scanf( "%d",&a[i][j] );
        }
     my_scanf( "%d %d", &b1,&b2 );
     for( i = 1; i <= b1; i ++ )
        {
         for( j = 1; j <= b2; j ++ )
         my_scanf( "%d",& b[i][j] );
         }
     for( k = 1; k <= a1; k ++ )
     {
         for ( l = 1; l <= b2; l ++ )
           {
             for( i = 1; i <= b1; i ++ )
                  c[k][l] += a[k][i] * b[i][l];
            if( l < b2 )
            my_printf( "%d ", c[k][l] );   
            else
            my_printf( "%d", c[k][l] );
           }
           my_printf("\n");
     }
}
