#define NUM_ITER 4236

#include <header.h>

int main_bench()
{int i,j,m,n;
my_scanf("%d",&m);
for(i=1;i<=m;i=i+1)
{my_scanf("%d",&n);
double sum=0,a=1.0,b=1.0,c;
for(j=1;j<=n;j=j+1)
{c=a;a=a+b;b=c;sum=sum+a*1.0/b;}
my_printf("%.3f",sum);
my_printf("\n");}
return 0;
}