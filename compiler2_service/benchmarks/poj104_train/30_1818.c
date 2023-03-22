#include <header.h>

int main_bench()
{
	int n, i, sum=0;
	my_scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%7==0||(i>=17&&(i-7)%10==0)||(i>=70&&i<=79))
			continue;
		else 
			sum+=i*i;
	}
	my_printf("%d",sum);
	return 0;
}