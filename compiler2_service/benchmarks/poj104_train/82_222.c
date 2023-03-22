#include <header.h>

int main_bench()
{
	int n,a,b,i,j=0,k=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d %d",&a,&b);
		if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90))
		{
			j++;
		}
		else 
		{
			k=(k>j)?k:j;j=0;
		}
	}
	k=(k>j)?k:j;
	my_printf("%d",k);
	return 0;
}
