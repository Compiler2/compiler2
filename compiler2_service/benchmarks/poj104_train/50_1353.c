#define NUM_ITER 637314

#include <header.h>

int main_bench(){
  int w,d=12,a;
  my_scanf("%d",&w);
  a=12%7;
  if((a+w)%7==5){my_printf("1\n");}
  d+=31;
  a=d%7;
  if((a+w)%7==5){my_printf("2\n");}
  d+=28;
  a=d%7;
  if((a+w)%7==5){my_printf("3\n");}
  d+=31;
  a=d%7;
  if((a+w)%7==5){my_printf("4\n");}
  d+=30;
  a=d%7;
  if((a+w)%7==5){my_printf("5\n");}
   d+=31;
  a=d%7;
  if((a+w)%7==5){my_printf("6\n");}
  d+=30;
  a=d%7;
  if((a+w)%7==5){my_printf("7\n");}
  d+=31;
  a=d%7;
  if((a+w)%7==5){my_printf("8\n");}
  d+=31;
  a=d%7;
  if((a+w)%7==5){my_printf("9\n");}
   d+=30;
  a=d%7;
  if((a+w)%7==5){my_printf("10\n");}
   d+=31;
  a=d%7;
  if((a+w)%7==5){my_printf("11\n");} 
  d+=30;
  a=d%7;
  if((a+w)%7==5){my_printf("12\n");}
return 0;
}