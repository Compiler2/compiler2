#define NUM_ITER 60181

#include <header.h>

int main_bench()
{
    int num[5]={'\0'};
    long number;
    int i,place=1;

    my_scanf("%ld",&number);
    do {
    place=1;
    for(i=0;i<=4;i++) {
        num[i]=number%10;
        number/=10;
        if(number!=0) 
            place+=1;
    }
    for(i=0;i<place;i++) 
        my_printf("%d",num[i]);
    my_printf("\n");
    my_scanf("%ld",&number);
    }while(number!=0);
    return 0;
}
        