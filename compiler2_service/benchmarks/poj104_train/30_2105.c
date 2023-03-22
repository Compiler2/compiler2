#include <header.h>

int main_bench()
{
	int n;
	int sum=0;
	int i=0;
    my_scanf("%d",&n);
	while(i<=n)
	{
		if(i%7!=0){
			if(i%10!=7){
				if(i/10!=7)
				  sum=sum+i*i;
			
			}

		}
		i++;
	}
	my_printf("%d\n",sum);
	return 0;
}