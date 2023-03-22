#define NUM_ITER 1978874

#include <header.h>

int main_bench(){
int n,t=0;
my_scanf("%d",&n);
if(n%3==0){
t=t+3;}
if(n%5==0){
t=t+5;}
if(n%7==0){
t=t+7;}
if(t==0){
my_printf("n");}
if(t==3){my_printf("3");}
if(t==5){my_printf("5"); }
if(t==7){my_printf("7");}
if(t==8){my_printf("3 5"); }
if(t==10){my_printf("3 7");}
if(t==12){my_printf("5 7");}
if(t==15){my_printf("3 5 7");}

return 0;
}