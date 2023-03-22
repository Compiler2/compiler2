#include <header.h>

int main_bench()
{
	int n,i,j,k,l,m;
	my_scanf("%d",&n);
	if(n==1) {my_printf("End");exit(1);}
	while (n!=1)
	{
		if (n%2==0) {k=n/2;my_printf("%d/2=%d\n",n,k);n=k;}
		else {k=n*3+1;my_printf("%d*3+1=%d\n",n,k);n=k;}
	}
	my_printf("End");
}