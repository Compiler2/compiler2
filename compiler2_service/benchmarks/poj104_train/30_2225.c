#define NUM_ITER 79245

#include <header.h>


int isnum(int);

int main_bench()
{
int n,sum=0;
my_scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if (isnum(i)==1)
{
	sum+=i*i;
}
}
my_printf("%d",sum);
return 0;
}

int isnum(int i)
{
if (i%10 == 7)
{
return 0;
}
if ((i/10)*10==70)
{
return 0;
}
if (i%7==0)
{
return 0;
}
return 1;
}
