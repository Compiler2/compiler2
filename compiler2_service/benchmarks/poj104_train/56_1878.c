#define NUM_ITER 1169817

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f;
	my_scanf("%d",&a);
    b=a/10000;
    c=a%10000/1000;
    d=a%1000/100;
    e=a%100/10;
    f=a%10;
    if (b!=0) my_printf("%d%d%d%d%d\n",f,e,d,c,b);
	else if(c!=0) my_printf("%d%d%d%d\n",f,e,d,c);
	else if(d!=0) my_printf("%d%d%d\n",f,e,d);
    else if(e!=0) my_printf("%d%d\n",f,e);
    else my_printf("%d\n",f);
}