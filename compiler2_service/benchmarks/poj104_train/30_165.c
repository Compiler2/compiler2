#include <header.h>

int main_bench()
{
	int n,i,sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	if(i%7!=0)
	if(i%10!=7&&i/10%10!=7)
			sum+=i*i;
		}
		my_printf("%d",sum);
		getchar();
		getchar();
		return 0;
	}
