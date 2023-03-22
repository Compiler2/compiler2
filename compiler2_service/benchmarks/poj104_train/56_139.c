#define NUM_ITER 1585637

#include <header.h>

int main_bench(){
 int x,y; 
    y=0; 
    my_scanf("%d",&x); 
    while(x>9){ 
      y=(y+x-x/10*10)*10; 
      x=x/10; 
    } 
    y=y+x; 
    my_printf("%d\n",y);
}