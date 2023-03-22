#define NUM_ITER 62341

#include <header.h>

int main_bench()
{
	int i,n,a,b,c;
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	if(a<b){a=a+b;b=a-b;a=a-b;}
	else{a=a;b=b;}
    for(i=3;i<=n;i++)
	{
		my_scanf("%d",&c);
		if(c>a){b=a;a=c;}
		else if(c>b){a=a;b=c;}
		else{a=a;b=b;}
		
	}
	my_printf("%d\n",a);
	my_printf("%d",b);
}
