#include <header.h>



int main_bench()
{
	int i,sum,n;
	my_scanf("%d",&n);
        sum=0;
	for(i=1;i<n+1;i++)
		if( i%7==0)
			continue;
		else if(i%10==7)
			continue;
		else if(i/10==7)
			continue;
		else{
			sum=sum+i*i;
		}
		
		
		
	my_printf("%d",sum);
	return 0;
}