#define NUM_ITER 27373

#include <header.h>

int isprime(int n)
{
 int i;
for(i=2;i<n;i++)
if(n%i==0)
return 0;
return 1;
}

int main_bench()
{
int m;
int i;
my_scanf("%d",&m);

for(i=3;i<=m/2;i+=2)
{
if(isprime(i)&&isprime(m-i))
{
my_printf("%d %d\n",i,m-i);
continue;
}
}
return 0;
}