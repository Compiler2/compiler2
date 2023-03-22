#define NUM_ITER 1271893

#include <header.h>

int main_bench(){

  int x,i;
  char n;

  my_scanf("%d",&x);
  if(x%3==0&&x%5==0&&x%7==0){
    
    my_printf("3 5 7");

  }

  else if(x%3==0&&x%5==0){my_printf("3 5");}
  else if(x%5==0&&x%7==0){my_printf("5 7");}
  else if(x%3==0&&x%7==0){my_printf("3 7");}
  else if(x%3==0){my_printf("3");}
  else if(x%5==0){my_printf("5");}
  else if(x%7==0){my_printf("7");}

 if(x%3!=0&&x%5!=0&&x%7!=0){my_printf("n");}


  return 0;
}