#define NUM_ITER 4824

#include <header.h>

int main_bench()
{
	int n,i,j,k,m,p,q;
	my_scanf("%d",&n);
	k=0;
	m=0;
	q=0;
	for(i=3;i<n-1;i=i+2)
	{
		for(j=3;j<i;j++)
		{
			if (i%j==0) k++;
			p=i+2;
			if (p%j==0) m++;
		}
		if (k==0 && m==0)
		{
			my_printf("%d %d\n",i,i+2);
			q++;
		}
		
		k=0;
		m=0;
		continue;
	}
	
	if(q==0) my_printf("empty");
	return 0;
}
 
