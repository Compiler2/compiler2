#define NUM_ITER 267504

#include <header.h>

void solve(int n)
{
if(n==2)my_printf("2/2=1\n");
else if(n%2==0){my_printf("%d/2=%d\n",n,n/2);solve(n/2);}
else {my_printf("%d*3+1=%d\n",n,n*3+1);solve(n*3+1);}
}
int main_bench()
{
int n;
my_scanf("%d",&n);
if(n==1)my_printf("End");
else
{solve(n);my_printf("End");}
}
