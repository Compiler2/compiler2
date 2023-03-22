#include <header.h>

int main_bench(){
int a, b, c, d, e, f;
int s;
a=1;
s=0;
while (a>0){
my_scanf ("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
if (a>0){
s=3600*(12-a)-60*b-c+3600*d+60*e+f;
my_printf ("%d\n", s);}}
return 0;}
