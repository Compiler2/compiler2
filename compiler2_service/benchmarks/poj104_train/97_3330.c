#include <header.h>

int main_bench(){
int m;
 my_scanf("%d",&m);
 int a,b,c,d,e,f;
 a=m/100;
 b=(m-100*a)/50;
 c=(m-100*a-50*b)/20;
 d=(m-a*100-50*b-20*c)/10;
 e=(m-a*100-50*b-20*c-10*d)/5;
 f=(m-a*100-50*b-20*c-10*d-e*5)/1;
 my_printf("%d\n",a);
 my_printf("%d\n",b);
 my_printf("%d\n",c);
 my_printf("%d\n",d);
 my_printf("%d\n",e);
 my_printf("%d\n",f);
	  return 0;
}