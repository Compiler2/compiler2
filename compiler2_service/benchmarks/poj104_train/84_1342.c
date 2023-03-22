#define NUM_ITER 65357

#include <header.h>

int main_bench()
{
int i,n,a,b,c,d;
my_scanf("%d",&n);
my_scanf("%d",&a);
b=a;
d=a;
for(i=1;i<n;i++)
{
	my_scanf("%d",&a);
	if(a>b){b=a;}
	else{
		if(a>d){d=a;}
	}
}

my_printf("%d\n%d",b,d);
return 0;
}