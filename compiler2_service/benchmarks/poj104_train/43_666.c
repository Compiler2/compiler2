#define NUM_ITER 14824

#include <header.h>

int main_bench()
{
	
	int judge(int x);
		int n,i,j,d=0;
	my_scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{d=0;
		if(judge(i)==1)d=d+1;
        j=n-i;
        if(judge(j)==1)d=d+1;
		if(d==2)my_printf("%d %d\n",i,j);
		
	}
	
	return 0;
}
int judge(int x)
{
	int i;
	for(i=2;i<=x/2;i++)
		if(x%i==0) break;
	if(i>x/2) return 1;
	else return 0;
}