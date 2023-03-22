#define NUM_ITER 10808

#include <header.h>

int main_bench(){
int a,b,c,d,e,f,total;
my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
while(a!=0){
 total=3600*(d+12-a-1)+60*e+f+3600-60*b-c;
 my_printf("%d\n",total);
 my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
}
return 0;
}