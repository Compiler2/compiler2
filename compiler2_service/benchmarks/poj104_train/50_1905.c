#define NUM_ITER 910510

#include <header.h>

int main_bench()
{
     int month[12]={31,28,31,30,31,30,31,31,30,31,30,31} , i , j, n, sum = 0 ,b[200][4],temp=0;
     my_scanf( "%d",&n );
     sum = n + 12;
     if( sum % 7 == 5 )
     my_printf("1\n");
     for(i = 1 ;i <= 11; i++ )
     {
     sum += month[i-1];
      if( sum % 7 == 5 )
      my_printf("%d\n",i+1);      
     }     
}
