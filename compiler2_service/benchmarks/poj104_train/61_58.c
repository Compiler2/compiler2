#define NUM_ITER 7277

#include <header.h>

main_bench()
{
int a,b,c,i,j;
int d[1000];
int e[1000];
my_scanf("%d",&a);
for(i=0;i<a;i++)
my_scanf("%d",&d[i]);
for(i=0;i<a;i++)
{e[0]=1;
e[1]=1;
if(d[i]<=2)
my_printf("1");
else
{for(j=2;j<d[i];j++)
e[j]=e[j-1]+e[j-2];
my_printf("%d\n",e[j-1]);
}
}
}