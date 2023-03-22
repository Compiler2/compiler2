#define NUM_ITER 1587628

#include <header.h>

int main_bench() {
int i;
my_scanf("%d",&i);
if(i%3==0 && i%5==0 && i%7==0){
	my_printf("3 5 7");
}else{
if(i%15==0){
	my_printf("3 5");
}else{
if(i%21==0){
	my_printf("3 7");
}else{
if(i%35==0){
	my_printf("5 7");
}else{
if(i%3==0){
	my_printf("3");
}else{
if(i%5==0){
	my_printf("5");
}else{
if(i%7==0){
	my_printf("7");
}else{
	my_printf("n");
}
}
}
}
}
}
}	
return 0;
}
