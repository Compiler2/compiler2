#include <header.h>

int main_bench()
{
	int n,k,i;
	my_scanf("%d", &n);
	if(n==1)
	{
		my_printf("End");
	}
	else
	{
		for(i=0;i>=0;i++){
			if(n==1)break;
			else if(n%2==1)
			{
			k=n*3+1;
			my_printf("%d*3+1=%d\n",n,k);
			n=k;
			}
			else if(n%2==0)
			{
				k=n/2;
				my_printf("%d/2=%d\n",n,k);
				n=k;
			}
			else if(n/2==1)
			{
				my_printf("%d/2=1\n",n);
				k=n;
			}
		
		}
		my_printf("End");
	}
	
	

	return 0;
}