#define NUM_ITER 636

#include <header.h>

int main_bench()
{
	int k,i,j,m,n,t;
	long s;
	my_scanf("%d",&n);
	i=0;
	j=0;
	m=0;
	t=0;
	do
	{ 
		my_scanf("%d",&k);
		t++;
		if(k==0&&m==0&&j==0) i++;
		if(j==1&&k==0) m++;
		if(k!=0&&i!=0) j=1;
	}while(t<(n*n));
	s=(i-2)*((m-(i-2))/2-1);
	my_printf("%ld",s);
         return 0;
}