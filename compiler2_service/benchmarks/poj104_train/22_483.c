#define NUM_ITER 1914134

#include <header.h>

int main_bench()
{
	char k;
	unsigned a,b,x,i,t;
	my_scanf("%d",&a);
	b=a;
	for(i=1;i<300;i++)
	{if((k=getchar())!=',') break;
	my_scanf("%d",&x);
	if(x>a) {b=a;a=x;}
	if(x>b&x<a) b=x;
	if(a==b&x<b) b=x;
	}
	if(a==b) my_printf("No");
	else my_printf("%d",b);
}