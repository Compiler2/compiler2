#define NUM_ITER 1233432

#include <header.h>

int main_bench(){
int a,b,c,d,e,f,n;
my_scanf("%d",&n);
a=0;b=0;c=0;d=0;e=0;f=0;
a=n/100;
n=n-a*100;
b=n/50;
n=n-b*50;
c=n/20;
n=n-c*20;
d=n/10;
n=n-d*10;
e=n/5;
f=n-e*5;
my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
return 0;
}