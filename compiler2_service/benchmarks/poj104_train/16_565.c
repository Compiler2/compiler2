#include <header.h>

int main_bench()
{
int a,b,c,d,e,f,t;
my_scanf("%d",&a);
b=a/10000;
c=(a-10000*b)/1000;
d=(a-10000*b-1000*c)/100;
e=(a-10000*b-1000*c-100*d)/10;
f=(a-10000*b-1000*c-100*d-10*e);
if(b!=0)
{
t=f;
f=b;
b=t;
t=e;
e=c;
c=t;
my_printf("%d%d%d%d%d",b,c,d,e,f);
}
else if(c!=0)
{t=f;
f=c;
c=t;
t=e;
e=d;
d=t;
my_printf("%d%d%d%d",c,d,e,f);
}
else if(d!=0)
{t=f;
f=d;
d=t;
my_printf("%d%d%d",d,e,f);
}
else if(e!=0)
{
t=f;
f=e;
e=t;
my_printf("%d%d",e,f);
}
else
my_printf("%d",f);

return 0;
}

