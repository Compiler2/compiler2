#define NUM_ITER 21301

#include <header.h>

int main_bench()
{
int n,i;
float a,b,c,d,x,y,e,f;
my_scanf("%d",&n);
my_scanf("%d %d",&a,&b);
x=b/a;
for (i=1;i<n;i++){
my_scanf("%d %d",&c,&d);
y=d/c;
e=y-x;
f=x-y;
if (e>0.05) my_printf("better\n");
else if (f>0.05) my_printf("worse\n");
else if (e<=0.05&&f<=0.05) my_printf("same\n");
}
return 0;
}
