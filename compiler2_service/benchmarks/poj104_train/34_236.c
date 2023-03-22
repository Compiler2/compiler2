#define NUM_ITER 355313

#include <header.h>

int main_bench()
{
int n,count=0;
my_scanf("%d",&n); 
if(n==1)
my_printf("End");
else
{
do{
if(n%2)
{
n=n*3+1; 
my_printf("%d*3+1=%d\n",(n-1)/3,n);
}
else
{
n/=2; 
my_printf("%d/2=%d\n",2*n,n);
}
}while(n!=1); 
my_printf("End");
}
} 