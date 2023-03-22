#include <header.h>

int main_bench()
{
	int n,a;
	int i=1;
	int result=0;
	my_scanf("%d",&n);
	while(i<=n){
		a=(i/10)%10;
		if((!(i%7==0))&&(!(i%10==7))&&(!(a==7))){
			result+=i*i;
		}
		i++;
	}
	my_printf("%d\n",result);
	return 0;
}

