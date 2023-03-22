#include <header.h>










int main_bench(){
    int num,i=1;
    my_scanf("%d",&num);
    if (num%3==0) {
        my_printf("3");
        i=0;
    }
    if (num%5==0) {
        if (i==0) {
            my_printf(" ");
        }
        my_printf("5");
        i=0;
    }
    if (num%7==0) {
        if (i==0) {
            my_printf(" ");
        }

        my_printf("7");
        i=0;
    }
    if (i==1) {
        my_printf("n");
    }    return 0;
        
    
}