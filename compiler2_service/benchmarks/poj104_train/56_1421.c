#define NUM_ITER 1656064

#include <header.h>


int main_bench()
{
int a , b , c , e , f , g , h ;

my_scanf("%d" , &a) ;
b = a/10000 ;
c = a/1000 - 10 * b ;
e = a/100 - 100*b - 10*c ;
f = a/10 - 1000*b - 100*c - 10*e ;
g = a - 10000*b - 1000*c - 100*e - 10*f ;

if(b != 0 ){
   h = 10000*g + 1000*f + 100*e + 10*c + b ;
   my_printf("%d" , h) ;
           }

else { 
    if( c != 0){
       h = 1000*g + 100*f + 10*e + c ;
       my_printf("%d" , h) ;
               }
    else{
         if(e != 0){
         h = 100*g + 10*f + e ;
         my_printf("%d" , h) ;
                   }
         else{
               if(f != 0){
                 h = 10*g + f ;
                 my_printf("%d" , h) ;
                         }
               else
               my_printf("%d" , g) ;
               }
         }
      }
return 0 ; 
}