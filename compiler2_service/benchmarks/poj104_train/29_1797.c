#define NUM_ITER 3018

#include <header.h>

int main_bench()
{
	int m,i;
int n,j;
float x,s;
my_scanf("%d",&m);

for(i=0;i<m;i++)
{
	my_scanf("%d",&n);
	for(s=0,j=0,x=2.0f;j<n;j++)
	{
		s=s+x;
			x=1+1/x;
	}
	my_printf("%.3f\n",s);	
}
}