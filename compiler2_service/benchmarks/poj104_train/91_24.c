#define NUM_ITER 1560605

#include <header.h>

int main_bench(){
  char a[102];
  int i;
  gets(a);
  for(i=0;;i++){
      my_printf("%c",a[i]+a[i+1]);
      if(a[i+2]=='\0'){
         break;
        }
     }
  my_printf("%c",a[i+1]+a[0]);
  return 0;
}