#define NUM_ITER 9949

#include <header.h>

main_bench()
{
int a,b,c,d,e,f;
my_scanf("%d",&a);
b=a/2;
if(a==6)
{my_printf("3 3");
return 0;}
for(c=3;c<=b;c++)
{for(e=0,d=2;d<c;d++)
{if(c%d==0)
e=1;}
if(e==0)
{f=a-c;
for(e=0,d=2;d<f;d++)
{if(f%d==0)
e=1;}
if(e==0)
my_printf("%d %d\n",c,f);
}
}
getchar();
getchar();
}