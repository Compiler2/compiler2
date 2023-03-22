#define NUM_ITER 3743

#include <header.h>

int sushu(int n)
{
	int i,k=1;
	for(i=2;i<n;i++)
	{
		if(n-(n/i)*i>0)
			k=k*1;
		else k=k*0;
	}
	return(k);
}
int main_bench()
{
	int n,i,k=0;
	my_scanf("%d",&n);
	for(i=5;i<=n;i++)
	{
		if((sushu(i)>0)&&(sushu(i-2)>0))
		{
			my_printf("%d %d\n",i-2,i);
			k=k++;
		}
	}
	if(k==0)
		my_printf("empty");
}
