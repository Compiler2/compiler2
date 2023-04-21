#define NUM_ITER 1311779

#include <header.h>

int main_bench()
{
	int f(int m,int n);
	int t,m,n;
	my_scanf("%d",&t);
	while(my_scanf("%d %d",&m,&n)==2)
		my_printf("%d\n",f(m,n));
}
int f(int m,int n)
{
	if(m==0 || n==1)
		return(1);
	else if(m<n)
		return(f(m,m));
	else
		return(f(m,n-1)+f(m-n,n));
}


