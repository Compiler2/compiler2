#define NUM_ITER 1699435

#include <header.h>

int main_bench()
{int a,b,c=0,d=0;my_scanf("%d%d",&a,&b);
if(a==b)my_printf("%d",a);
else{
for(;a;)c=(c<<1)|(a&1),a>>=1;
for(;b;)d=(d<<1)|(b&1),b>>=1;
a=c^d,c=0;
for(;(a&1)==0;)c=(c<<1)|(d&1),a>>=1,d>>=1;
my_printf("%d",c);}}