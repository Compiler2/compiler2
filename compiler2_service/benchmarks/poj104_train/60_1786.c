#define NUM_ITER 3463

#include <header.h>

main_bench()
{
	int n,i,m,j,k,b=0,l;
	my_scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			k++;
		}
		if(k==2)
		{
			m=i;
			l=0;
			for(j=1;j<=m+2;j++)
			{
				if((m+2)%j==0)
				l++;
			}
			if(l==2)
			{
				if(m==3)
				my_printf("%d %d",m,m+2);
				else
				my_printf("\n%d %d",m,m+2);
				b=1;
			}
		}
		
	
		
	}
	if(b==0)
	my_printf("empty");
}