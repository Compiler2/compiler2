#include <header.h>

int main_bench()
{
int count=0;
int a,b,c,n;
int i=1;
my_scanf("%d",&n);
b=0;
c=0;
while(i<=n)
{
	i++;
    my_scanf("%d",&a);
	if(a>=b)c=b,b=a;
    if(a>c&&a<b)c=a;
}
my_printf("%d\n",b);
my_printf("%d\n",c);
return 0;
}