#define NUM_ITER 13494

#include <header.h>

int main_bench() {
int a,b,c,d,e,f,x,y,z,sum;
while(1){
my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a<1) break;
x=3600*(12-a+d);
y=60*e+f;
z=60*b+c;
sum=x+y-z;
my_printf("%d\n",sum);}
return 0;
}
