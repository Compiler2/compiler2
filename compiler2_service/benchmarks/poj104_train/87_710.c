#include <header.h>

int main_bench(){
int a,b,c,d,e,f,h,m,s,t;
for(;a!=0;){
my_scanf("%d%d%d%d%d%d\n",&a,&b,&c,&d,&e,&f);
d+=12;
h=d-a;
m=e-b;
s=f-c;
t=3600*h+60*m+s;
if(a!=0){
	my_printf("%d\n",t);}
}
return 0;
}
