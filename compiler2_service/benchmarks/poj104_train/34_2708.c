#define NUM_ITER 124373

#include <header.h>

int jiaogu(int n)
{	
	if(n%2==1)
	{
		n=n*3+1;	
	}
	else
	{
		n=n/2;		
	}
	return(n);
}
int main_bench()
{
	int jiaogu(int n);
	int n;
	my_scanf("%d",&n);
	if(n==1) my_printf("End");
	else{
	while(jiaogu(n)!=1)
	{	
		int k;
		k=n;
		if(n%2==1) my_printf("%d*3+1=%d\n",k,jiaogu(n));
		else my_printf("%d/2=%d\n",k,jiaogu(n));
		n=jiaogu(n);
	}
	my_printf("2/2=1\n");
	my_printf("End");}
}