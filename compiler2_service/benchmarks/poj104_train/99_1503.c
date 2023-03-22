#define NUM_ITER 57561

#include <header.h>

int main_bench(){
  int n, year, i;
   double a, b, c, d;
    a=0;
    b=0;
    c=0;
    d=0;
  my_scanf("%d", &n);
  for(i=0;i<n;i++){
   my_scanf("%d", &year);
   if(year<=18 && year>=1){
      a++;}
  if(year>18 && year<=35){
   b++;}
   if(year>35 && year<=60){
   c++;}
    if(year>60){
     d++;}
          }
     my_printf("1-18: %.2lf", a/n*100); my_printf("%%\n");
    my_printf("19-35: %.2lf", b/n*100); my_printf("%%\n");
    my_printf("36-60: %.2lf", c/n*100); my_printf("%%\n");
      my_printf("60??: %.2lf", d/n*100); my_printf("%%\n");
     return 0;
     }