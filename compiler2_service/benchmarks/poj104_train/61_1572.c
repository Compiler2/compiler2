#include <header.h>

int main_bench()
{
	int k,n,i,last1,last2,b,result;
	my_scanf("%d",&k);
    for(i=0;i<k;i++)
	{
		my_scanf("%d",&n);
		if(n==1||n==2)
		{
			my_printf("1\n");
		}
		else
		{
			last1=1;
			last2=1;

			for(b=3;b<=n;b++)
			{
				result=last1+last2;
				last2=last1;
				last1=result;
			}
		    my_printf("%d\n",result);
		}
	}
	return 0;
}