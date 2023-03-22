#define NUM_ITER 1468813

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g,h;
	my_scanf("%d",&a);
    b=a%3;
    c=a%5;
    d=a%7;
    e=a%15;
    f=a%21;
    g=a%35;
    h=a%105;
    if(h==0)
    my_printf("3 5 7\n");
    else if(e==0)
    my_printf("3 5\n");
    else if(f==0)
    my_printf("3 7\n");
    else if(g==0)
    my_printf("5 7\n");
    else if(b==0)
    my_printf("3\n");
    else if(c==0)
    my_printf("5\n");
    else if(d==0)
    my_printf("7\n");
    else my_printf("n");
	return 0;
}
