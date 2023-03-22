#include <header.h>

int main_bench()
{
int a,b,c,d,e,i;
i=1;
my_scanf("%d\n",&a);
while(i<=a)
{
	my_scanf("%d",&b);
if(i==1)
{
c=b;
d=b;
}
	if(b>c)
{
e=c;
c=b;
if(e>d)
d=e;
}
else if(b>d)
d=b;
i=i+1;
}
my_printf("%d\n%d\n",c,d);

return 0;
}

