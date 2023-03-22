#define NUM_ITER 292025

#include <header.h>

int main_bench()
{
int n,sum,i,t;

my_scanf("%d",&n);

sum=n;

for(i=0;sum!=1;i++)
{
	if(sum%2!=0){t=sum;sum=sum*3+1;my_printf("%d*3+1=%d\n",t,sum);}

	else if(sum%2==0){t=sum;sum=sum/2;my_printf("%d/2=%d\n",t,sum);}
}

my_printf("End");
return 0;
}
