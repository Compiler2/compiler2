#define NUM_ITER 735938

#include <header.h>

int main_bench()
{
 int a=0,b=0,c=0,y=0,n=0;
 my_scanf("%d %d %d",&a,&b,&c);
 a=a-1;
 b=b-1;
 y=a*1+a/4-a/100+a/400;
 a=a+1;
 if((a%100==0&&a%400!=0)||(a%4!=0))
 {
 if(b==0){
  b=0;
 } 
 if(b==1){
  b=31;
 }
 if(b==2){
  b=31+28;
 }
 if(b==3){
  b=31+28+31;
 }
 if(b==4){
  b=31+28+31+30;
 }
 if(b==5){
  b=31+28+31+30+31;
 }
 if(b==6){
  b=31+28+31+30+31+30;
 }
 if(b==7){
  b=31+28+31+30+31+30+31;
 }
 if(b==8){
  b=31+28+31+30+31+30+31+31;
 }
 if(b==9){
     b=31+28+31+30+31+30+31+31+30;
 }
 if(b==10){
     b=31+28+31+30+31+30+31+31+30+31;
 }
 if(b==11){
       b=31+28+31+30+31+30+31+31+30+31+30;
 }
 }
 if((a%400==0)||(a%4==0&&a%100!=0)){
  if(b==0){
  b=0;
 } 
  if(b==1){
  b=31;
 }
 if(b==2){
  b=31+29;
 }
 if(b==3){
  b=31+29+31;
 }
 if(b==4){
  b=31+29+31+30;
 }
 if(b==5){
  b=31+29+31+30+31;
 }
 if(b==6){
  b=31+29+31+30+31+30;
 }
 if(b==7){
  b=31+29+31+30+31+30+31;
 }
 if(b==8){
     b=31+29+31+30+31+30+31+31;
 }
 if(b==9){
     b=31+29+31+30+31+30+31+31+30;
 }
 if(b==10){
     b=31+29+31+30+31+30+31+31+30+31;
 }
 if(b==11){
       b=31+29+31+30+31+30+31+31+30+31+30;
 }
 }
 n=y+b+c;
    if(n%7==0){
 my_printf("Sun.");
 }
 if(n%7==1){
  my_printf("Mon.");
 }
 if(n%7==2){
  my_printf("Tue.");
 }
 if(n%7==3){
  my_printf("Wed.");
 }
 if(n%7==4){
  my_printf("Thr.");
 }
 if(n%7==5){
  my_printf("Fri.");
 }
 if(n%7==6){
  my_printf("Sat.");
 }
 return 0;
}
