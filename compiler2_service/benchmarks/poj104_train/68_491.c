#define NUM_ITER 100131

#include <header.h>

int p(int x)
{
	int i,sgn=0;
	for(i=3;i*i<=x;i+=2)
		if(x%i==0)
		{
			sgn=1;
			break;
		}
		return(sgn);
}
int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	for(i=6;i<=n;i+=2)
		for(j=3;j*2<=i;j+=2)
		{
			if(p(j)==0&&p(i-j)==0)
			{
				my_printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	return 0;
}