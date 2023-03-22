#define NUM_ITER 105609

#include <header.h>


int main_bench()
{
	int m,a,k,b;
	my_scanf("%d",&m);

	if(m==6)
		my_printf("3 3\n");
	else
	{
		for(k=1;4*k+2<=m;k++)
		{
			a=2*k+1;
			b=m-a;

			int i=2;
			while(i*i<=a)
			{
				if(a%i==0) break;
				i++;
			}

			int j=2;
			while(j*j<=b)
			{
				if(b%j==0) break;
				j++;
			}

			if(i*i>a&&j*j>b) my_printf("%d %d\n",a,b);
		}
	}

	return 0;
}