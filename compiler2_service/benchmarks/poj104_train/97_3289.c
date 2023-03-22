#include <header.h>

int main_bench() {
 int a,b,c,d,e,f,g;
 a<=1000;
 my_scanf("%d",&a);
 b=a/100;
 c=(a%100)/50;
 d=((a%100)-c*50)/20;
 e=((a%100)-c*50-20*d)/10;
 f=(a%10)/5;
 g=((a%10)-f*5)/1;
my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,c,d,e,f,g);
return 0;
}