#include <header.h>


int main_bench(){
	int n,m,i,j,k,l;
	my_scanf("%d",&n);
	for(i=0;n!=1;i++)
	{
		if(n%2==0)
		{
			m=n/2;
			my_printf("%d/2=%d\n",n,m);
			n/=2;
		}
		else if(n%2!=0)
		{
			m=n*3+1;
			my_printf("%d*3+1=%d\n",n,m);
			n=n*3+1;
		}
	}
	my_printf("End");
	return 0;
}
