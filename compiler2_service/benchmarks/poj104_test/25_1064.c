#define NUM_ITER 21415

#include <header.h>

int main_bench()
{
    int k , i ,j ,len;
    int str[100];
    memset( str , 0 ,sizeof( str )  );
    my_scanf("%d",&k);
    str[0]  = 2;
    len =1;
    for( i = 2 ;i <= k; i ++ )
    {
        for( j = 0 ; j < len ;j++ )
        str[j] = str[j]*2;
        for( j = 0 ;j < len ;j++ )
        {
        if( str[j] >= 10 )
          {str[j]-=10;        
          str[j+1] += 1;
          }
        }
         if( str[len] != 0 )
         len ++;
    }
    
    if( k == 0 )my_printf("1");
    else
    {
    for( i = len-1;i >= 0 ;i-- )
    my_printf("%d",str[i]);
     }
}
