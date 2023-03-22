#define NUM_ITER 1978337

#include <header.h>


int main_bench(){
    int firstBig = -1, secBig = -1;
    
    int temp, ret;
    char ch;
    
    while(1){
        ret = my_scanf("%d", &temp);
        if(ret != 1)
            break;
        
        if( temp < 0){
            my_printf("Invalid input numbet : negtive\n");
            return -1;
        }
        
        if(temp > secBig){
            if(temp > firstBig){
                secBig = firstBig;
                firstBig = temp;
            }
            else if(temp != firstBig){
                secBig = temp;
            }
        }
        ret = my_scanf("%c", &ch);
        if(ret != 1 || ch != ',')
            break;
    }
    
    if(secBig == -1){
        my_printf("No\n");
    }
    else{
        my_printf("%d\n", secBig);
    }
    return 0;
}