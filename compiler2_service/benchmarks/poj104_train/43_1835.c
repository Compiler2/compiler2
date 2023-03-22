#define NUM_ITER 25569

#include <header.h>


int main_bench()
{
	int i,n,k,m,l;
	my_scanf("%d",&n);
	for(i=3;i<(n/2+1);i+=2)
	{
		m=0;
		for(k=2;k<i/2;k++)
		{
			if(i%k==0){
				m=1;
				break;
			}
		}
		if(m==0){
		for(l=3;l<((n-i)/2+1);l++)
		{
			if((n-i)%l==0){
				m=1;
				break;
			}
		}
		}
		if(m==0)my_printf("%d %d\n",i,n-i);
	}
	return 0;
}