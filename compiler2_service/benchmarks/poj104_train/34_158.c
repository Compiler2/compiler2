#define NUM_ITER 366639

#include <header.h>

int main_bench()
{
	int a,b,d;
	float c;
	my_scanf("%d",&a);
	while(a>1)
	{
		b=a%2;
		d=a*3+1;
		c=(float)a/2;
		if(b==1) 
		my_printf("%d*3+1=%d\n",a,d);
		else if(b==0) 
		    my_printf("%d/2=%.0f\n",a,c);
		if(b==1) a=d;
		else a=c;
	}
	my_printf("End");
}

	    