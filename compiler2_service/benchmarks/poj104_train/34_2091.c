#define NUM_ITER 341779

#include <header.h>

int main_bench(){
    int a,b;
    my_scanf("%d",&a);
    if(a==1){
             my_printf("End");
             }
    else{
    for(int i=1;;i++){
            if(a%2==0){
                       b=a/2;
                       my_printf("%d/2=%d\n",a,b);
                       a=b;}
            else{
                 b=a*3+1;
                 my_printf("%d*3+1=%d\n",a,b);
                 a=b;
                 }
            if(a==1){
                     my_printf("End");
                     break;}}}
     int y;
    my_scanf("%d",&y);
    return 0;}