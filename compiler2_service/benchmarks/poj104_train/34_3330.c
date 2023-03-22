#define NUM_ITER 348985

#include <header.h>

int main_bench()
{
int n;
my_scanf("%d",&n);
while(n!=1)
{if(n%2==0) {n=n/2;my_printf("%d/2=%d\n",2*n,n);}
else {n=3*n+1;my_printf("%d*3+1=%d\n",(n-1)/3,n);}
}
 my_printf("End");
return 0;
}