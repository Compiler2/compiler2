#include <header.h>

int main_bench()
{

	int n,a,i;
	a=0;
	i=0;
	my_scanf("%d",&n);

	while(i<n){
		i++;
		
		if((i%7==0)||(i/10==7)||(i-(i/10)*10==7))
		continue;
            a+=i*i;
		
	}
	

	my_printf("%d",a);
	return 0;
}