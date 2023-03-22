#define NUM_ITER 54567

#include <header.h>

    int yu7WuGuan(int); 
    
    int main_bench(){
         int num, i, result = 0; 
         my_scanf("%d", &num); 
         for(i = 1; i <= num; i++) { 
               if(yu7WuGuan(i)) { 
               result += i*i; 
               } 
         }
               my_printf("%d", result);
               return 0;
               }
         int yu7WuGuan(int number){
         int num; 
         if(number%7 == 0) {
                     return 0;
         } 
         for(num = number; num > 0; num /= 10) { 
         if (num%10 == 7) {
                     return 0; 
                     } 
         } 
         return 1;
    } 