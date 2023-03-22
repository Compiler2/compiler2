#include <header.h>


int main_bench()
{
	int n,i,sum;
	sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		if (i%7!=0&&(int)i%10!=7&&(int)i/10!=7){
			sum+=i*i;
		}
	my_printf("%d",sum);
	return 0;
}