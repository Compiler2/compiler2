#define NUM_ITER 1504723

#include <header.h>

int main_bench()
{
	int  n, a=0, b, c=0, d=0, e=0, f=0;
	my_scanf("%d", &n);
	a=(int)n/100;
	f=n-a*100;
	my_printf("%d\n", a);
	b=f/10;
	if(b==0){
		my_printf("%d\n%d\n%d\n", 0, 0, 0);
	}
	else if(b/5==0){
		if(b%2==0){
			my_printf("%d\n%d\n%d\n", 0, b/2, 0);
		}
	
	    else{
		 my_printf("%d\n%d\n%d\n", 0, (int)b/2,1);
		}
	}

	if(b/5!=0){
		e=b-5;
		if(e%2==0) 	my_printf("%d\n%d\n%d\n", 1,  e/2, 0);
	    else{
		 my_printf("%d\n%d\n%d\n", 1, (int)e/2,1);
		}
	}


	c=n-100*a-10*b;
	if(c==0){
		my_printf("%d\n%d\n", 0,  0);
	}
	else if(c/5==0){
		my_printf("%d\n%d\n", 0,  c);
	}

	else{
	 d=c-5;
		my_printf("%d\n%d\n", 1, d);
	    
	}

	
	return 0;
}

