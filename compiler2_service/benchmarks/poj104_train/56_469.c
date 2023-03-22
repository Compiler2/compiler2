#define NUM_ITER 1490936

#include <header.h>


int main_bench()
{
	int n, a, b, c, d, f, x;
	my_scanf("%d", &n);
	a=(int)n/10000;
	b=(int)(n-10000*a)/1000;
	c=(int)(n-10000*a-1000*b)/100;
	d=(int)(n-10000*a-1000*b-100*c)/10;
	f=(int)(n-10000*a-1000*b-100*c-d*10)/1;
	if(a!=0)
	{x=f*10000+d*1000+c*100+b*10+a;}
    else {
		if(b!=0)
		{x=f*1000+d*100+c*10+b;}
	else{
		if(c!=0)
		{x=f*100+d*10+c;}
    else{
		if(d!=0)
		{x=f*10+d;}
	     else
		 {x=f;}
	}
	}
	}
	my_printf("%d\n", x);
	return 0;
}

