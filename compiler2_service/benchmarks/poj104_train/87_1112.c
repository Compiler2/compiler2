#include <header.h>

int main_bench(){
int a,b,c,d,e,f,t1,t2,s;
my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
while(a!=0){
	d=d+12;
t1=a*3600+b*60+c;
t2=d*3600+e*60+f;
s=t2-t1;
my_printf("%d\n",s);
my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
}
return 0;
}

