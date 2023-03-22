#define NUM_ITER 881280

#include <header.h>

int main_bench()
{
	long a;
	int b,c,d,e,f;
	my_scanf("%ld",&a);
    f=a%10;
	a=(int)(a/10);
	e=a%10;
	a=(int)(a/10);
    d=a%10;
	a=(int)(a/10);
    c=a%10;
	a=(int)(a/10);
    b=a%10;
	if(b!=0)
		my_printf("%d%d%d%d%d\n",f,e,d,c,b);
	else
		if(c!=0)
	     	my_printf("%d%d%d%d\n",f,e,d,c);
		else
			if(d!=0)
				my_printf("%d%d%d\n",f,e,d);
			else
				if(e!=0)
                    my_printf("%d%d\n",f,e);
				else
					my_printf("%d\n",f,f);
}
