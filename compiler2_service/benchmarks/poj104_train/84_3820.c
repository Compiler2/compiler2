#define NUM_ITER 56111

#include <header.h>

int main_bench()
{
	int n,i,m[100],t;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&m[i]);
		if(m[i]>=m[i-1])
		m[i]=m[i],m[i-1]=m[i-1];
		else if(m[i]>=m[i-2])
		t=m[i],m[i]=m[i-1],m[i-1]=t;
		else m[i]=m[i-1],m[i-1]=m[i-2];
	}
	my_printf("%d\n%d\n",m[n],m[n-1]);
	return 0;
}