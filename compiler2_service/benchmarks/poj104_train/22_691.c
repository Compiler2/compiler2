#define NUM_ITER 1854255

#include <header.h>

int main_bench()
{
	int a,b,c;
char d;
	my_scanf("%d",&a);
b=0;
c=0;
for( ; ; )
{
d=getchar();
if(d!=',')
break;
my_scanf("%d",&b);
if(b>a)
{c=a;
a=b;}
if(b<a&&b>c)
c=b;
}
if(c==0)
my_printf("No");
else
my_printf("%d",c);
	return 0;
}
