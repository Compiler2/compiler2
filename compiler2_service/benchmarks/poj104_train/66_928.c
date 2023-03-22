#define NUM_ITER 10467

#include <header.h>

int main_bench()
{
    long y , m , dd , ak = 0 , i , ans ;    
    my_scanf ( "%d%d%d", &y , &m , &dd ) ; 
    for ( i = 1 ; i <= 400 ; i ++ ) 
    {
      if (i % 4 != 0 )ak = (ak + 365 ) % 7 ; 
       else
        if ( i % 400 == 0 ||  i % 100 != 0)   ak = (ak + 366 ) % 7 ;
         else ak = (ak + 365 ) % 7 ;
      }
    ans = (y-1) / 400 * ak % 7 ; 
    y %= 400 ; if (y==0)  y = 400 ;  ak = ans ; 
    for ( i = 1 ; i < y ; i ++ ) 
    {
      if (i % 4 != 0 ) ak = (ak + 365 ) % 7 ; 
       else
        if ( i % 400 == 0 ||  i % 100 != 0)   ak = (ak + 366 ) % 7 ;
         else ak = (ak + 365 ) % 7 ;
      }
      ans = ak ; 
      int j  , d = 0 ; 
     for ( j = 1 ; j < m ; j ++ ) 
        {
            if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)          d+=31;
            if(j==4||j==6||j==9||j==11) d+=30;
            
            if(j==2)
            if(y%400==0||(y%4==0&&y%100!=0))      d+=29;
            else  d+=28;
        }
        d += dd ; 
        ans += d ;
        ans %= 7 ;
    switch ( ans ) 
    {  case 0 :  my_printf ("Sun.") ; break;
    case 1 :  my_printf ("Mon.") ; break ;
    case 2 :  my_printf ("Tue.")  ; break ; 
    case 3 : my_printf ( "Wen.")  ; break;
    case 4 : my_printf ( "Thu.")  ; break;
    case 5 :my_printf ( "Fri.")  ; break;
    case 6 : my_printf ( "Sat.")  ; break;
     }

    return 0 ; 
    }
