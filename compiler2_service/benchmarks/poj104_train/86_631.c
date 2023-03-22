#include <header.h>

int main_bench()
{
	int n,i,m,j;
	int data;
	my_scanf("%d",&n);
	for( i = 1; i <= n; i++ )
	{
		int sum = 0;
		int flag = 1;
		int num = 0;
		my_scanf("%d",&m);
		for( j = 1; j <= m ; j++ )
		{
			my_scanf("%d",&data);
			if( data + num >= 60 && flag )
			{
				sum = 60 - num;
				flag = 0;
			}
			num += 3;
			if( data + num >= 60 && flag)
			{
				sum = data;
				flag = 0;
			}

		}
		if( sum == 0 )
			sum = 60 - num;
		my_printf("%d\n",sum);

	}
	return 0;
}