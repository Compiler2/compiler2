#define NUM_ITER 1050430

#include <header.h>

int main_bench(){
int a,b,c,d,e,f,sum;
my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
while(a>=1&&d<=11&&b>=0&&c>=0&&e>=0&&f>=0&&b<=59&&c<=59&&e<=59&&f<=59){
	
sum=(12+d)*3600+60*e+f-3600*a-60*b-c;
my_printf("%d\n",sum);
my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
}
return 0;}