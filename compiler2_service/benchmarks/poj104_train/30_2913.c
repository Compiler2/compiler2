#include <header.h>



int main_bench()
{
		int a,n,i=1,sum=0;
	my_scanf("%d",&n);
	while (i<=n){
		if(i%7==0||i/10==7||i-i/10*10==7){
		sum=sum;
		i++;
		}
		else{
			sum+=i*i;
			i++;
				
		}
	}
    
	my_printf("%d",sum);
	return 0;
	}