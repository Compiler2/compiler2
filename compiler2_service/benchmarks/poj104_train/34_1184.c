#define NUM_ITER 223012

#include <header.h>

int lgm( int num )
{
   if( num == 1 )
   return 0;
   if( num % 2 == 0 )
   {
   my_printf("%d/2=%d\n",num,num/2);
   lgm( num/2 );
   }
   if( num % 2 == 1  )
   {
   my_printf("%d*3+1=%d\n",num,num*3+1 );
   lgm( num*3+1 );
   }
}
int main_bench()
{
    int n;
    my_scanf("%d",&n );
    lgm( n );
    my_printf("End");
}
