#define NUM_ITER 1371443

#include <header.h>

int main_bench(){
int m,a,b,c,d,e,f;
my_scanf ("%d",&m);
int i=1;
if(i<=m){
i++;
a=m/100;
b=(m-100*a)/50;
c=(m-100*a-50*b)/20;
d=(m-100*a-50*b-20*c)/10;
e=(m-100*a-50*b-20*c-10*d)/5;
f=m-100*a-50*b-20*c-10*d-e*5;
my_printf ("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
}
return 0;
}