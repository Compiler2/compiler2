#define NUM_ITER 977616

#include <header.h>

int main_bench(){
    int i;
    my_scanf("%d",&i);
    if((i%3==0)&&(i%5==0)&&(i%7==0)){
    my_printf("%d %d %d",3,5,7);
     }
     if((i%3==0)&&(i%5==0)&&(i%7!=0)){
    my_printf("%d %d",3,5);
     }
      if((i%3==0)&&(i%5!=0)&&(i%7==0)){
    my_printf("%d %d",3,7);
     }
      if((i%3!=0)&&(i%5==0)&&(i%7==0)){
    my_printf("%d %d",5,7);
     } 
    if((i%3==0)&&(i%5!=0)&&(i%7!=0)){
      my_printf("%d",3);
     } 
    if((i%3!=0)&&(i%5==0)&&(i%7!=0)){
      my_printf("%d",5);
     } 
    if((i%3!=0)&&(i%5!=0)&&(i%7==0)){
      my_printf("%d",7);
     }
    if((i%3!=0)&&(i%5!=0)&&(i%7!=0)){
     my_printf("n");
     }
     return 0;
}




     