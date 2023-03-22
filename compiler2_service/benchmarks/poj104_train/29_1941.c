#define NUM_ITER 5076

#include <header.h>

int main_bench()
{
	int m,n,j,a=2,b=1,t,i;
	float s,k=0.0;
	my_scanf("%d",&m);

	for(i=1;i<=m;i++)
	{
		k=0.0;
		a=2;
		b=1;
		
		my_scanf("%d",&n);
		if(n==1)
		{
			my_printf("2.000\n");
		}
		else
		{
	
         for(j=1;j<=n-1;j++)
		 {
			 t=a;
			 a=a+b;
			 b=t;
			 s=1.0*a/b;
			 k=k+s;
		 }
		 k=k+2;
		 
		 my_printf("%.3f\n",k);
		 
		}
		
	}
	return 0;
}
