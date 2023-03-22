#include <header.h>


int change(int n)
{
	int x;
	if(n==1) x=1;
	else {
		if((n%2)==0) {x=n/2;
		my_printf("%d/2=%d\n",n,x);}
		else {x=n*3+1;
		my_printf("%d*3+1=%d\n",n,x);}
	}
	return(x);
}


int main_bench()
{
	int n,k=0;
	my_scanf("%d",&n);
	
	k=change(n);
	while(k!=1)
	{
		k=change(k);
	}
	my_printf("End");
}

	