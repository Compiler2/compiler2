#define NUM_ITER 1164438

#include <header.h>


int main_bench()
{
  int a;
  my_scanf("%d",&a);
  if(a%105==0) 
     my_printf("3 5 7");
  else
 {
  if(a%15==0)  my_printf("3 5");
  if(a%21==0)  my_printf("3 7");
  if(a%35==0)  my_printf("5 7");
  if(a%3==0&&a%5!=0&&a%7!=0) my_printf("3");
  if(a%5==0&&a%3!=0&&a%7!=0) my_printf("5");
  if(a%7==0&&a%5!=0&&a%3!=0) my_printf("7");
  if(a%7!=0&&a%5!=0&&a%3!=0) my_printf("n");


 }
 return 0;
}