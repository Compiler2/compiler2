#define NUM_ITER 284358

#include <header.h>



int main_bench()
{
	int n,m,i,b,a[100]={0};
my_scanf("%d",&n);
if(n!=1)
{
do{
if (n%2!=0)
{my_printf("%d*3+1=%d\n",n,n*3+1);
 n=n*3+1;
}
else
{
	my_printf("%d/2=%d\n",n,n/2);
		n=n/2;
}
}
while(n>1);

my_printf("End");
}
else

my_printf("End");

return 0;
}