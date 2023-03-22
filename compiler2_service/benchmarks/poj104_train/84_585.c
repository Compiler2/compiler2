#include <header.h>

int main_bench()
{
int i,s[100],n,a,b,t;
my_scanf("%d",&n);
my_scanf("%d%d",&s[0],&s[1]);
if(s[0]>s[1])
{
	a=s[0];
	b=s[1];
}
else
{
	a=s[1];
	b=s[0];
}
for (i=2;i<=(n-1);i++)
{
my_scanf("%d",&s[i]);
if(a>s[i]&&s[i]>b)
{
	t=b;
	b=s[i];
	s[i]=t;
}
else if(s[i]>a)
{
t=a;
b=t;
a=s[i];
}
}
my_printf("%d\n%d\n",a,b);
return 0;
}
