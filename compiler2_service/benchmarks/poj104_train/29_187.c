#define NUM_ITER 3190

#include <header.h>

int main_bench()
{
int n,i,j,o;
float a=1,b=1,c=0,d=1,p,s=0,e;
my_scanf("%d",&n);
for(j=0;j<n;j++)
{
	my_scanf("%d",&o);
	s=0;
	a=1;
	b=1;
	c=0;
	d=1;
for(i=0;i<o;i++)
{
p=(a+b)/(c+d);
s=s+p;
e=a;
a=b;
b=e+a;
e=c;
c=d;
d=e+c;
}
my_printf("%.3f\n",s);
}


return 0;
}