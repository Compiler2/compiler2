#define NUM_ITER 59919

#include <header.h>

int main_bench()
{
	int n,a,b,i,t;
	my_scanf("%d%d%d%d",&n,&a,&b,&t);
	if(a>b){
		a = a;
		b = b;
	}
	else
	{
		t = a;
		a = b;
		b = t;
	};

    for(i=3;i<=n;i++)
    {
		int c;
		my_scanf("%d",&c);
    if(c>a&&c>b)
	{
		t = a;
		a = c;
		b = t;
	
	}
    else if(c<a&&c>b)
	{
		a = a;
		b = c;
	}
	else {
		a = a;
		b = b;
	};
	};
		my_printf("%d\n",a);
		my_printf("%d",b);
	
	return 0;
}
