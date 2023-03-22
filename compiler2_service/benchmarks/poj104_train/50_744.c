#define NUM_ITER 709824

#include <header.h>

int main_bench(){
int n,a;
my_scanf("%d",&n);
for(int x=1;x<=12;x++){
if(x==1){
a=(13+n-1)%7;
if(a==5){my_printf("1\n");}}
else if(x==2){
a=(31+13+n-1)%7;
if(a==5){my_printf("2\n");}}
else if(x==3){
a=(31+28+13+n-1)%7;
if(a==5){my_printf("3\n");}}
else if(x==4){
a=(31*2+28+13+n-1)%7;
if(a==5){my_printf("4\n");}}
else if(x==5){
	a=(31*2+28+30+13+n-1)%7;
if(a==5){my_printf("5\n");}}
else if(x==6){
a=(31*3+28+30+13+n-1)%7;
if(a==5){my_printf("6\n");}}
else if(x==7){
a=(31*3+28+30*2+13+n-1)%7;
if(a==5){my_printf("7\n");}}
else if(x==8){
a=(31*4+28+30*2+13+n-1)%7;
if(a==5){my_printf("8\n");}}
else if(x==9){
a=(31*5+28+30*2+13+n-1)%7;
if(a==5){my_printf("9\n");}}
else if(x==10){
a=(31*5+28+30*3+13+n-1)%7;
if(a==5){my_printf("10\n");}}
else if(x==11){
a=(31*6+28+30*3+13+n-1)%7;
if(a==5){my_printf("11\n");}}
else if(x==12){
a=(31*6+28+30*4+13+n-1)%7;
if(a==5){my_printf("12\n");}}
}
return 0;
}